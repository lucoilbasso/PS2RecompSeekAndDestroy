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

// Function: entry_001ce920
// Address: 0x1ce920 - 0x1ce960
void entry_001ce920_0x1ce920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce920_0x1ce920");
#endif

    switch (ctx->pc) {
        case 0x1ce95cu: goto label_1ce95c;
        default: break;
    }

    ctx->pc = 0x1ce920u;

    // 0x1ce920: 0x124000f6  beqz        $s2, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1CE920u;
    {
        const bool branch_taken_0x1ce920 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE920u;
        // 0x1ce924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce920) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CE928u;
    // 0x1ce928: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE928u;
    {
        const bool branch_taken_0x1ce928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE928u;
        // 0x1ce92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce928) {
            ctx->pc = 0x1CE960u;
            return;
        }
    }
    ctx->pc = 0x1CE930u;
    // 0x1ce930: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ce930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce934: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce938: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce93c: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ce940: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce944: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce948: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce94c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ce94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce950: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1ce950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ce954: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE954u;
    SET_GPR_U32(ctx, 31, 0x1CE95Cu);
    ctx->pc = 0x1CE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE954u;
    // 0x1ce958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE954u, 0x1CE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE95Cu;
label_1ce95c:
    // 0x1ce95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce960u;
}
