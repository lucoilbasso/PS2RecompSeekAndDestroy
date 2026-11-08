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

// Function: entry_001369e4
// Address: 0x1369e4 - 0x136a20
void entry_001369e4_0x1369e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001369e4_0x1369e4");
#endif

    switch (ctx->pc) {
        case 0x136a1cu: goto label_136a1c;
        default: break;
    }

    ctx->pc = 0x1369e4u;

    // 0x1369e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1369e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1369e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1369e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1369ec: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1369ECu;
    {
        const bool branch_taken_0x1369ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369ECu;
        // 0x1369f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369ec) {
            ctx->pc = 0x136A70u;
            return;
        }
    }
    ctx->pc = 0x1369F4u;
    // 0x1369f4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1369f8: 0x32910fff  andi        $s1, $s4, 0xFFF
    ctx->pc = 0x1369f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4095);
    // 0x1369fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1369fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x136a00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x136A00u;
    {
        const bool branch_taken_0x136a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a00) {
            ctx->pc = 0x136A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A00u;
            // 0x136a04: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136A20u;
            return;
        }
    }
    ctx->pc = 0x136A08u;
    // 0x136a08: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x136a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x136a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a10: 0x24a56780  addiu       $a1, $a1, 0x6780
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26496));
    // 0x136a14: 0xc068186  jal         func_1A0618
    ctx->pc = 0x136A14u;
    SET_GPR_U32(ctx, 31, 0x136A1Cu);
    ctx->pc = 0x136A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A14u;
    // 0x136a18: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x136A14u, 0x136A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A1Cu;
label_136a1c:
    // 0x136a1c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x136a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x136a20u;
}
