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

// Function: entry_0019f2f0
// Address: 0x19f2f0 - 0x19f348
void entry_0019f2f0_0x19f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2f0_0x19f2f0");
#endif

    ctx->pc = 0x19f2f0u;

    // 0x19f2f0: 0x14e00021  bnez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x19F2F0u;
    {
        const bool branch_taken_0x19f2f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2F0u;
        // 0x19f2f4: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2f0) {
            ctx->pc = 0x19F378u;
            return;
        }
    }
    ctx->pc = 0x19F2F8u;
    // 0x19f2f8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x19f2fc: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x19f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x19f300: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x19f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x19f304: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19f308: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x19f30c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x19f310: 0x4d2024  and         $a0, $v0, $t5
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x19f314: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19f314u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19f318: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x19f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x19f31c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x19f31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f320: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x19f320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x19f324: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f328: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19f32c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x19f330: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x19f330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x19f334: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x19f338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F338u;
    {
        const bool branch_taken_0x19f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F338u;
        // 0x19f33c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f338) {
            ctx->pc = 0x19F348u;
            return;
        }
    }
    ctx->pc = 0x19F340u;
    // 0x19f340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F340u;
    {
        const bool branch_taken_0x19f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F340u;
        // 0x19f344: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f340) {
            ctx->pc = 0x19F34Cu;
            return;
        }
    }
    ctx->pc = 0x19F348u;
}
