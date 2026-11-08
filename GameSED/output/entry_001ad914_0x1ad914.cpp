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

// Function: entry_001ad914
// Address: 0x1ad914 - 0x1ad938
void entry_001ad914_0x1ad914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad914_0x1ad914");
#endif

    switch (ctx->pc) {
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad934u: goto label_1ad934;
        default: break;
    }

    ctx->pc = 0x1ad914u;

    // 0x1ad914: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD914u;
    {
        const bool branch_taken_0x1ad914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad914) {
            ctx->pc = 0x1AD918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD914u;
            // 0x1ad918: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD938u;
            return;
        }
    }
    ctx->pc = 0x1AD91Cu;
    // 0x1ad91c: 0xc06b93a  jal         func_1AE4E8
    ctx->pc = 0x1AD91Cu;
    SET_GPR_U32(ctx, 31, 0x1AD924u);
    ctx->pc = 0x1AD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD91Cu;
    // 0x1ad920: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE4E8u, 0x1AD91Cu, 0x1AD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD924u;
label_1ad924:
    // 0x1ad924: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x1ad924u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ad928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad92c: 0xc06b66e  jal         func_1AD9B8
    ctx->pc = 0x1AD92Cu;
    SET_GPR_U32(ctx, 31, 0x1AD934u);
    ctx->pc = 0x1AD930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD92Cu;
    // 0x1ad930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD9B8u, 0x1AD92Cu, 0x1AD934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD934u;
label_1ad934:
    // 0x1ad934: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1ad938u;
}
