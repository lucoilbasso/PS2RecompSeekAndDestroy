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

// Function: entry_0011dc78
// Address: 0x11dc78 - 0x11dce8
void entry_0011dc78_0x11dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc78_0x11dc78");
#endif

    switch (ctx->pc) {
        case 0x11dc90u: goto label_11dc90;
        case 0x11dcc0u: goto label_11dcc0;
        default: break;
    }

    ctx->pc = 0x11dc78u;

    // 0x11dc78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11dc7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11dc80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11dc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11dc84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11dc88: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DC88u;
    SET_GPR_U32(ctx, 31, 0x11DC90u);
    ctx->pc = 0x11DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC88u;
    // 0x11dc8c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DC88u, 0x11DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC90u;
label_11dc90:
    // 0x11dc90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11dc90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc94: 0x2e42000d  sltiu       $v0, $s2, 0xD
    ctx->pc = 0x11dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x11dc98: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11DC98u;
    {
        const bool branch_taken_0x11dc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC98u;
        // 0x11dc9c: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc98) {
            ctx->pc = 0x11DD20u;
            return;
        }
    }
    ctx->pc = 0x11DCA0u;
    // 0x11dca0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dca4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x11dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11dca8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11dcac: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x11dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x11dcb0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x11DCB0u;
    {
        const bool branch_taken_0x11dcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcb0) {
            ctx->pc = 0x11DCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCB0u;
            // 0x11dcb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD24u;
            return;
        }
    }
    ctx->pc = 0x11DCB8u;
    // 0x11dcb8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DCB8u;
    SET_GPR_U32(ctx, 31, 0x11DCC0u);
    ctx->pc = 0x11DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCB8u;
    // 0x11dcbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DCB8u, 0x11DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCC0u;
label_11dcc0:
    // 0x11dcc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11dcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcc8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x11dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x11dccc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11dcd0: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DCD0u;
    {
        const bool branch_taken_0x11dcd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x11DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCD0u;
        // 0x11dcd4: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcd0) {
            ctx->pc = 0x11DCE8u;
            return;
        }
    }
    ctx->pc = 0x11DCD8u;
    // 0x11dcd8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dcdc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x11dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11dce0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x11dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11dce4: 0x8c5101b0  lw          $s1, 0x1B0($v0)
    ctx->pc = 0x11dce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    ctx->pc = 0x11dce8u;
}
