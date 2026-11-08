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

// Function: entry_0012d4d8
// Address: 0x12d4d8 - 0x12d508
void entry_0012d4d8_0x12d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d4d8_0x12d4d8");
#endif

    ctx->pc = 0x12d4d8u;

label_12d4d8:
    // 0x12d4d8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d4e0: 0x0  nop
    ctx->pc = 0x12d4e0u;
    // NOP
    // 0x12d4e4: 0x0  nop
    ctx->pc = 0x12d4e4u;
    // NOP
    // 0x12d4e8: 0x0  nop
    ctx->pc = 0x12d4e8u;
    // NOP
    // 0x12d4ec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D4ECu;
    {
        const bool branch_taken_0x12d4ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4ECu;
        // 0x12d4f0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4ec) {
            ctx->pc = 0x12D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d4d8;
        }
    }
    ctx->pc = 0x12D4F4u;
    // 0x12d4f4: 0x12800241  beqz        $s4, . + 4 + (0x241 << 2)
    ctx->pc = 0x12D4F4u;
    {
        const bool branch_taken_0x12d4f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4F4u;
        // 0x12d4f8: 0x27b70100  addiu       $s7, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f4) {
            ctx->pc = 0x12DDFCu;
            return;
        }
    }
    ctx->pc = 0x12D4FCu;
    // 0x12d4fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d500: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12d500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d504: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    ctx->pc = 0x12d508u;
}
