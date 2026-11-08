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

// Function: entry_001bb924
// Address: 0x1bb924 - 0x1bb980
void entry_001bb924_0x1bb924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb924_0x1bb924");
#endif

    switch (ctx->pc) {
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb964u: goto label_1bb964;
        case 0x1bb978u: goto label_1bb978;
        default: break;
    }

    ctx->pc = 0x1bb924u;

    // 0x1bb924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb928: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BB928u;
    SET_GPR_U32(ctx, 31, 0x1BB930u);
    ctx->pc = 0x1BB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB928u;
    // 0x1bb92c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BB928u, 0x1BB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB930u;
label_1bb930:
    // 0x1bb930: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb934: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bb938: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x1bb938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1bb93c: 0x2484d250  addiu       $a0, $a0, -0x2DB0
    ctx->pc = 0x1bb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955600));
    // 0x1bb940: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1bb940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb944: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bb944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bb948: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bb948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bb94c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb950: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bb954: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1bb954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb958: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1bb958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb95c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BB95Cu;
    SET_GPR_U32(ctx, 31, 0x1BB964u);
    ctx->pc = 0x1BB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB95Cu;
    // 0x1bb960: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BB95Cu, 0x1BB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB964u;
label_1bb964:
    // 0x1bb964: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB964u;
    {
        const bool branch_taken_0x1bb964 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb964) {
            ctx->pc = 0x1BB968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB964u;
            // 0x1bb968: 0x8ec2c090  lw          $v0, -0x3F70($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB980u;
            return;
        }
    }
    ctx->pc = 0x1BB96Cu;
    // 0x1bb96c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb970: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB970u;
    SET_GPR_U32(ctx, 31, 0x1BB978u);
    ctx->pc = 0x1BB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB970u;
    // 0x1bb974: 0x8c44c0a8  lw          $a0, -0x3F58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB970u, 0x1BB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB978u;
label_1bb978:
    // 0x1bb978: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BB978u;
    {
        const bool branch_taken_0x1bb978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB978u;
        // 0x1bb97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb978) {
            ctx->pc = 0x1BB9ACu;
            return;
        }
    }
    ctx->pc = 0x1BB980u;
}
