#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ApStudioLoadCdPack__FP9ApcStudio
// Address: 0x112c38 - 0x112cd8
void ApStudioLoadCdPack__FP9ApcStudio_0x112c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioLoadCdPack__FP9ApcStudio_0x112c38");
#endif

    switch (ctx->pc) {
        case 0x112c54u: goto label_112c54;
        case 0x112c64u: goto label_112c64;
        case 0x112c74u: goto label_112c74;
        case 0x112c84u: goto label_112c84;
        case 0x112c94u: goto label_112c94;
        case 0x112ca4u: goto label_112ca4;
        case 0x112cb4u: goto label_112cb4;
        case 0x112cc4u: goto label_112cc4;
        default: break;
    }

    ctx->pc = 0x112c38u;

    // 0x112c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112c3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x112c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112c4c: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112C4Cu;
    SET_GPR_U32(ctx, 31, 0x112C54u);
    ctx->pc = 0x112C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C4Cu;
    // 0x112c50: 0x244441b0  addiu       $a0, $v0, 0x41B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112C4Cu, 0x112C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C54u;
label_112c54:
    // 0x112c54: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112c58: 0xae020374  sw          $v0, 0x374($s0)
    ctx->pc = 0x112c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 2));
    // 0x112c5c: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112C5Cu;
    SET_GPR_U32(ctx, 31, 0x112C64u);
    ctx->pc = 0x112C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C5Cu;
    // 0x112c60: 0x248441c0  addiu       $a0, $a0, 0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112C5Cu, 0x112C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C64u;
label_112c64:
    // 0x112c64: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112c68: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x112c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x112c6c: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112C6Cu;
    SET_GPR_U32(ctx, 31, 0x112C74u);
    ctx->pc = 0x112C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C6Cu;
    // 0x112c70: 0x248441d0  addiu       $a0, $a0, 0x41D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112C6Cu, 0x112C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C74u;
label_112c74:
    // 0x112c74: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112c78: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x112c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x112c7c: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112C7Cu;
    SET_GPR_U32(ctx, 31, 0x112C84u);
    ctx->pc = 0x112C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C7Cu;
    // 0x112c80: 0x248441e0  addiu       $a0, $a0, 0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112C7Cu, 0x112C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C84u;
label_112c84:
    // 0x112c84: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112c88: 0xae020378  sw          $v0, 0x378($s0)
    ctx->pc = 0x112c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 2));
    // 0x112c8c: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112C8Cu;
    SET_GPR_U32(ctx, 31, 0x112C94u);
    ctx->pc = 0x112C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C8Cu;
    // 0x112c90: 0x248441f0  addiu       $a0, $a0, 0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112C8Cu, 0x112C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C94u;
label_112c94:
    // 0x112c94: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112c98: 0xae02037c  sw          $v0, 0x37C($s0)
    ctx->pc = 0x112c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 2));
    // 0x112c9c: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112C9Cu;
    SET_GPR_U32(ctx, 31, 0x112CA4u);
    ctx->pc = 0x112CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C9Cu;
    // 0x112ca0: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112C9Cu, 0x112CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA4u;
label_112ca4:
    // 0x112ca4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112ca8: 0xae020380  sw          $v0, 0x380($s0)
    ctx->pc = 0x112ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
    // 0x112cac: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112CACu;
    SET_GPR_U32(ctx, 31, 0x112CB4u);
    ctx->pc = 0x112CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CACu;
    // 0x112cb0: 0x24844210  addiu       $a0, $a0, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112CACu, 0x112CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CB4u;
label_112cb4:
    // 0x112cb4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x112cb8: 0xae020384  sw          $v0, 0x384($s0)
    ctx->pc = 0x112cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
    // 0x112cbc: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112CBCu;
    SET_GPR_U32(ctx, 31, 0x112CC4u);
    ctx->pc = 0x112CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CBCu;
    // 0x112cc0: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112CBCu, 0x112CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CC4u;
label_112cc4:
    // 0x112cc4: 0xae020388  sw          $v0, 0x388($s0)
    ctx->pc = 0x112cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
    // 0x112cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x112CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD0u;
        // 0x112cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112CD8u;
}
