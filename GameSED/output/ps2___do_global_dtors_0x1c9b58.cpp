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

// Function: __do_global_dtors
// Address: 0x1c9b58 - 0x1c9be4
void ps2___do_global_dtors_0x1c9b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x1c9b58");
#endif

    switch (ctx->pc) {
        case 0x1c9b58u: goto label_1c9b58;
        case 0x1c9b5cu: goto label_1c9b5c;
        case 0x1c9b60u: goto label_1c9b60;
        case 0x1c9b64u: goto label_1c9b64;
        case 0x1c9b68u: goto label_1c9b68;
        case 0x1c9b6cu: goto label_1c9b6c;
        case 0x1c9b70u: goto label_1c9b70;
        case 0x1c9b74u: goto label_1c9b74;
        case 0x1c9b78u: goto label_1c9b78;
        case 0x1c9b7cu: goto label_1c9b7c;
        case 0x1c9b80u: goto label_1c9b80;
        case 0x1c9b84u: goto label_1c9b84;
        case 0x1c9b88u: goto label_1c9b88;
        case 0x1c9b8cu: goto label_1c9b8c;
        case 0x1c9b90u: goto label_1c9b90;
        case 0x1c9b94u: goto label_1c9b94;
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9b9cu: goto label_1c9b9c;
        case 0x1c9ba0u: goto label_1c9ba0;
        case 0x1c9ba4u: goto label_1c9ba4;
        case 0x1c9ba8u: goto label_1c9ba8;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bb0u: goto label_1c9bb0;
        case 0x1c9bb4u: goto label_1c9bb4;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bbcu: goto label_1c9bbc;
        case 0x1c9bc0u: goto label_1c9bc0;
        case 0x1c9bc4u: goto label_1c9bc4;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9bccu: goto label_1c9bcc;
        case 0x1c9bd0u: goto label_1c9bd0;
        case 0x1c9bd4u: goto label_1c9bd4;
        case 0x1c9bd8u: goto label_1c9bd8;
        case 0x1c9bdcu: goto label_1c9bdc;
        case 0x1c9be0u: goto label_1c9be0;
        default: break;
    }

    ctx->pc = 0x1c9b58u;

label_1c9b58:
    // 0x1c9b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9b5c:
    // 0x1c9b5c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1c9b60:
    // 0x1c9b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c9b64:
    // 0x1c9b64: 0x2444de00  addiu       $a0, $v0, -0x2200
    ctx->pc = 0x1c9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
label_1c9b68:
    // 0x1c9b68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c9b6c:
    // 0x1c9b6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9b70:
    // 0x1c9b70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c9b74:
    // 0x1c9b74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1c9b78:
    if (ctx->pc == 0x1C9B78u) {
        ctx->pc = 0x1C9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B74u;
        // 0x1c9b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9B7Cu;
        goto label_1c9b7c;
    }
    ctx->pc = 0x1C9B74u;
    {
        const bool branch_taken_0x1c9b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B74u;
        // 0x1c9b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b74) {
            ctx->pc = 0x1C9BA4u;
            goto label_1c9ba4;
        }
    }
    ctx->pc = 0x1C9B7Cu;
label_1c9b7c:
    // 0x1c9b7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9b80:
    // 0x1c9b80: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1c9b84:
    // 0x1c9b84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c9b88:
    // 0x1c9b88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9b8c:
    // 0x1c9b8c: 0x60f809  jalr        $v1
label_1c9b90:
    if (ctx->pc == 0x1C9B90u) {
        ctx->pc = 0x1C9B94u;
        goto label_1c9b94;
    }
    ctx->pc = 0x1C9B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B8Cu, 0x1C9B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B94u;
label_1c9b94:
    // 0x1c9b94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9b98:
    // 0x1c9b98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9b9c:
    // 0x1c9b9c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1c9ba0:
    if (ctx->pc == 0x1C9BA0u) {
        ctx->pc = 0x1C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B9Cu;
        // 0x1c9ba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BA4u;
        goto label_1c9ba4;
    }
    ctx->pc = 0x1C9B9Cu;
    {
        const bool branch_taken_0x1c9b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b9c) {
            ctx->pc = 0x1C9BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9B9Cu;
            // 0x1c9ba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b80;
        }
    }
    ctx->pc = 0x1C9BA4u;
label_1c9ba4:
    // 0x1c9ba4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1c9ba8:
    // 0x1c9ba8: 0x2445de04  addiu       $a1, $v0, -0x21FC
    ctx->pc = 0x1c9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958596));
label_1c9bac:
    // 0x1c9bac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c9bb0:
    // 0x1c9bb0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1c9bb4:
    if (ctx->pc == 0x1C9BB4u) {
        ctx->pc = 0x1C9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BB0u;
        // 0x1c9bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BB8u;
        goto label_1c9bb8;
    }
    ctx->pc = 0x1C9BB0u;
    {
        const bool branch_taken_0x1c9bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BB0u;
        // 0x1c9bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bb0) {
            ctx->pc = 0x1C9BD8u;
            goto label_1c9bd8;
        }
    }
    ctx->pc = 0x1C9BB8u;
label_1c9bb8:
    // 0x1c9bb8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1c9bbc:
    // 0x1c9bbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c9bc0:
    // 0x1c9bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9bc4:
    // 0x1c9bc4: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x1c9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
label_1c9bc8:
    // 0x1c9bc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1c9bcc:
    // 0x1c9bcc: 0x8072bc6  j           func_1CAF18
label_1c9bd0:
    if (ctx->pc == 0x1C9BD0u) {
        ctx->pc = 0x1C9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BCCu;
        // 0x1c9bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BD4u;
        goto label_1c9bd4;
    }
    ctx->pc = 0x1C9BCCu;
    ctx->pc = 0x1C9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BCCu;
    // 0x1c9bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF18u;
    ps2___deregister_frame_info_0x1caf18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9BD4u;
label_1c9bd4:
    // 0x1c9bd4: 0x0  nop
    ctx->pc = 0x1c9bd4u;
    // NOP
label_1c9bd8:
    // 0x1c9bd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c9bdc:
    // 0x1c9bdc: 0x3e00008  jr          $ra
label_1c9be0:
    if (ctx->pc == 0x1C9BE0u) {
        ctx->pc = 0x1C9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BDCu;
        // 0x1c9be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BE4u;
        goto label_fallthrough_0x1c9bdc;
    }
    ctx->pc = 0x1C9BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BDCu;
        // 0x1c9be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c9bdc:
    ctx->pc = 0x1C9BE4u;
}
