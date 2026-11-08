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

// Function: entry_00112c48
// Address: 0x112c48 - 0x112cb4
void entry_00112c48_0x112c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c48_0x112c48");
#endif

    switch (ctx->pc) {
        case 0x112c54u: goto label_112c54;
        case 0x112c64u: goto label_112c64;
        case 0x112c74u: goto label_112c74;
        case 0x112c84u: goto label_112c84;
        case 0x112c94u: goto label_112c94;
        case 0x112ca4u: goto label_112ca4;
        default: break;
    }

    ctx->pc = 0x112c48u;

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
}
