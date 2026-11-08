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

// Function: WCdManCDStatusUpDate__Fv
// Address: 0x178b98 - 0x178c1c
void WCdManCDStatusUpDate__Fv_0x178b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManCDStatusUpDate__Fv_0x178b98");
#endif

    switch (ctx->pc) {
        case 0x178bb0u: goto label_178bb0;
        case 0x178c00u: goto label_178c00;
        case 0x178c08u: goto label_178c08;
        default: break;
    }

    ctx->pc = 0x178b98u;

    // 0x178b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178b9c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178ba4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178ba8: 0xc06ecd2  jal         func_1BB348
    ctx->pc = 0x178BA8u;
    SET_GPR_U32(ctx, 31, 0x178BB0u);
    ctx->pc = 0x178BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BA8u;
    // 0x178bac: 0x8c500024  lw          $s0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB348u, 0x178BA8u, 0x178BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BB0u;
label_178bb0:
    // 0x178bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb4: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x178bb8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x178BB8u;
    {
        const bool branch_taken_0x178bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bb8) {
            ctx->pc = 0x178BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178BB8u;
            // 0x178bbc: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178BFCu;
            goto label_178bfc;
        }
    }
    ctx->pc = 0x178BC0u;
    // 0x178bc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178bc4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x178bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x178bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178bcc: 0x8c637a10  lw          $v1, 0x7A10($v1)
    ctx->pc = 0x178bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31248)));
    // 0x178bd0: 0x600008  jr          $v1
    ctx->pc = 0x178BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178BD8u: goto label_178bd8;
            case 0x178BE8u: goto label_178be8;
            case 0x178BF8u: goto label_178bf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x178BD8u;
label_178bd8:
    // 0x178bd8: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178bdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178BDCu;
    {
        const bool branch_taken_0x178bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BDCu;
        // 0x178be0: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bdc) {
            ctx->pc = 0x178C00u;
            goto label_178c00;
        }
    }
    ctx->pc = 0x178BE4u;
    // 0x178be4: 0x0  nop
    ctx->pc = 0x178be4u;
    // NOP
label_178be8:
    // 0x178be8: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178bec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178BECu;
    {
        const bool branch_taken_0x178bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BECu;
        // 0x178bf0: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bec) {
            ctx->pc = 0x178C08u;
            goto label_178c08;
        }
    }
    ctx->pc = 0x178BF4u;
    // 0x178bf4: 0x0  nop
    ctx->pc = 0x178bf4u;
    // NOP
label_178bf8:
    // 0x178bf8: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
label_178bfc:
    // 0x178bfc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x178bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_178c00:
    // 0x178c00: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x178c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x178c04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_178c08:
    // 0x178c08: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x178c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    // 0x178c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178c14: 0x3e00008  jr          $ra
    ctx->pc = 0x178C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C14u;
        // 0x178c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C1Cu;
}
