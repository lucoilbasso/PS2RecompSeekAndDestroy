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

// Function: entry_001cc530
// Address: 0x1cc530 - 0x1cc570
void entry_001cc530_0x1cc530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc530_0x1cc530");
#endif

    switch (ctx->pc) {
        case 0x1cc53cu: goto label_1cc53c;
        default: break;
    }

    ctx->pc = 0x1cc530u;

    // 0x1cc530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc534: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CC534u;
    SET_GPR_U32(ctx, 31, 0x1CC53Cu);
    ctx->pc = 0x1CC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC534u;
    // 0x1cc538: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC534u, 0x1CC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC53Cu;
label_1cc53c:
    // 0x1cc53c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC53Cu;
    {
        const bool branch_taken_0x1cc53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC53Cu;
        // 0x1cc540: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc53c) {
            ctx->pc = 0x1CC598u;
            return;
        }
    }
    ctx->pc = 0x1CC544u;
    // 0x1cc544: 0xae5e0000  sw          $fp, 0x0($s2)
    ctx->pc = 0x1cc544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 30));
    // 0x1cc548: 0x6800009  bltz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC548u;
    {
        const bool branch_taken_0x1cc548 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1CC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC548u;
        // 0x1cc54c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc548) {
            ctx->pc = 0x1CC570u;
            return;
        }
    }
    ctx->pc = 0x1CC550u;
    // 0x1cc550: 0x2de1023  subu        $v0, $s6, $fp
    ctx->pc = 0x1cc550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x1cc554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc558: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1cc558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x1cc55c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc560: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1cc560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1cc564: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CC564u;
    {
        const bool branch_taken_0x1cc564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC564u;
        // 0x1cc568: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc564) {
            ctx->pc = 0x1CC524u;
            return;
        }
    }
    ctx->pc = 0x1CC56Cu;
    // 0x1cc56c: 0x0  nop
    ctx->pc = 0x1cc56cu;
    // NOP
    ctx->pc = 0x1cc570u;
}
