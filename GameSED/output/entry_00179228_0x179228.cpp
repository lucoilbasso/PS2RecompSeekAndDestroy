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

// Function: entry_00179228
// Address: 0x179228 - 0x179270
void entry_00179228_0x179228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179228_0x179228");
#endif

    switch (ctx->pc) {
        case 0x17923cu: goto label_17923c;
        case 0x179258u: goto label_179258;
        default: break;
    }

    ctx->pc = 0x179228u;

label_179228:
    // 0x179228: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x179228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17922c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x179230: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x179230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x179234: 0xc071654  jal         func_1C5950
    ctx->pc = 0x179234u;
    SET_GPR_U32(ctx, 31, 0x17923Cu);
    ctx->pc = 0x179238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179234u;
    // 0x179238: 0x26080020  addiu       $t0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5950u, 0x179234u, 0x17923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17923Cu;
label_17923c:
    // 0x17923c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17923Cu;
    {
        const bool branch_taken_0x17923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17923c) {
            ctx->pc = 0x179240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17923Cu;
            // 0x179240: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179228;
        }
    }
    ctx->pc = 0x179244u;
    // 0x179244: 0x26514030  addiu       $s1, $s2, 0x4030
    ctx->pc = 0x179244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16432));
    // 0x179248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17924c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17924cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179250: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179250u;
    SET_GPR_U32(ctx, 31, 0x179258u);
    ctx->pc = 0x179254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179250u;
    // 0x179254: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179250u, 0x179258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179258u;
label_179258:
    // 0x179258: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17925c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17925Cu;
    {
        const bool branch_taken_0x17925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17925c) {
            ctx->pc = 0x179260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17925Cu;
            // 0x179260: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179270u;
            return;
        }
    }
    ctx->pc = 0x179264u;
    // 0x179264: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x179264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x179268: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x179268u;
    {
        const bool branch_taken_0x179268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179268u;
        // 0x17926c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179268) {
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x179270u;
}
