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

// Function: entry_001790e8
// Address: 0x1790e8 - 0x179120
void entry_001790e8_0x1790e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001790e8_0x1790e8");
#endif

    switch (ctx->pc) {
        case 0x1790f4u: goto label_1790f4;
        case 0x179110u: goto label_179110;
        default: break;
    }

    ctx->pc = 0x1790e8u;

    // 0x1790e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1790e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790ec: 0xc05e7c8  jal         func_179F20
    ctx->pc = 0x1790ECu;
    SET_GPR_U32(ctx, 31, 0x1790F4u);
    ctx->pc = 0x1790F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790ECu;
    // 0x1790f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F20u, 0x1790ECu, 0x1790F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790F4u;
label_1790f4:
    // 0x1790f4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1790F4u;
    {
        const bool branch_taken_0x1790f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790f4) {
            ctx->pc = 0x1790F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790F4u;
            // 0x1790f8: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179120u;
            return;
        }
    }
    ctx->pc = 0x1790FCu;
    // 0x1790fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1790fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179108: 0xc05e7c8  jal         func_179F20
    ctx->pc = 0x179108u;
    SET_GPR_U32(ctx, 31, 0x179110u);
    ctx->pc = 0x17910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179108u;
    // 0x17910c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F20u, 0x179108u, 0x179110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179110u;
label_179110:
    // 0x179110: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x179110u;
    {
        const bool branch_taken_0x179110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179110) {
            ctx->pc = 0x179114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179110u;
            // 0x179114: 0x24100202  addiu       $s0, $zero, 0x202 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179130u;
            return;
        }
    }
    ctx->pc = 0x179118u;
    // 0x179118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x179118u;
    {
        const bool branch_taken_0x179118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179118u;
        // 0x17911c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179118) {
            ctx->pc = 0x179134u;
            return;
        }
    }
    ctx->pc = 0x179120u;
}
