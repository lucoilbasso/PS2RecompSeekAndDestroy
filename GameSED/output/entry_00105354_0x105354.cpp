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

// Function: entry_00105354
// Address: 0x105354 - 0x105380
void entry_00105354_0x105354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105354_0x105354");
#endif

    ctx->pc = 0x105354u;

    // 0x105354: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x105354u;
    {
        const bool branch_taken_0x105354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x105358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105354u;
        // 0x105358: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105354) {
            ctx->pc = 0x1053B4u;
            return;
        }
    }
    ctx->pc = 0x10535Cu;
    // 0x10535c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10535Cu;
    {
        const bool branch_taken_0x10535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10535Cu;
        // 0x105360: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10535c) {
            ctx->pc = 0x105380u;
            return;
        }
    }
    ctx->pc = 0x105364u;
    // 0x105364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10536c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10536cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105370: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105374: 0x8066682  j           func_199A08
    ctx->pc = 0x105374u;
    ctx->pc = 0x105378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105374u;
    // 0x105378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A08u;
    SequenceCtrlPush__10WcSequencei_0x199a08(rdram, ctx, runtime); return;
    ctx->pc = 0x10537Cu;
    // 0x10537c: 0x0  nop
    ctx->pc = 0x10537cu;
    // NOP
    ctx->pc = 0x105380u;
}
