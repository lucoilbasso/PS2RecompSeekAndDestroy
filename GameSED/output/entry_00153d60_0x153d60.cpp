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

// Function: entry_00153d60
// Address: 0x153d60 - 0x153d98
void entry_00153d60_0x153d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153d60_0x153d60");
#endif

    switch (ctx->pc) {
        case 0x153d6cu: goto label_153d6c;
        case 0x153d8cu: goto label_153d8c;
        default: break;
    }

    ctx->pc = 0x153d60u;

    // 0x153d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d64: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x153D64u;
    SET_GPR_U32(ctx, 31, 0x153D6Cu);
    ctx->pc = 0x153D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D64u;
    // 0x153d68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153D64u, 0x153D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D6Cu;
label_153d6c:
    // 0x153d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d70: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x153d74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153D74u;
    {
        const bool branch_taken_0x153d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D74u;
        // 0x153d78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d74) {
            ctx->pc = 0x153DCCu;
            return;
        }
    }
    ctx->pc = 0x153D7Cu;
    // 0x153d7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153D7Cu;
    {
        const bool branch_taken_0x153d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D7Cu;
        // 0x153d80: 0xae220858  sw          $v0, 0x858($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d7c) {
            ctx->pc = 0x153D98u;
            return;
        }
    }
    ctx->pc = 0x153D84u;
    // 0x153d84: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x153D84u;
    SET_GPR_U32(ctx, 31, 0x153D8Cu);
    ctx->pc = 0x153D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D84u;
    // 0x153d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153D84u, 0x153D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D8Cu;
label_153d8c:
    // 0x153d8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x153d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x153d90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x153D90u;
    {
        const bool branch_taken_0x153d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D90u;
        // 0x153d94: 0xae200854  sw          $zero, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d90) {
            ctx->pc = 0x153DCCu;
            return;
        }
    }
    ctx->pc = 0x153D98u;
}
