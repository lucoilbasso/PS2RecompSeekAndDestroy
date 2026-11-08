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

// Function: caseD_7
// Address: 0x1334e0 - 0x133508
void caseD_7_0x1334e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1334e0");
#endif

    ctx->pc = 0x1334e0u;

    // 0x1334e0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1334e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1334e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1334e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1334e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1334e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1334ec: 0x506402ed  beql        $v1, $a0, . + 4 + (0x2ED << 2)
    ctx->pc = 0x1334ECu;
    {
        const bool branch_taken_0x1334ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1334ec) {
            ctx->pc = 0x1334F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1334ECu;
            // 0x1334f0: 0x8e70023c  lw          $s0, 0x23C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1334F4u;
    // 0x1334f4: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x1334f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x1334f8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1334fc: 0x100002e9  b           . + 4 + (0x2E9 << 2)
    ctx->pc = 0x1334FCu;
    {
        const bool branch_taken_0x1334fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334FCu;
        // 0x133500: 0x3050000f  andi        $s0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334fc) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133504u;
    // 0x133504: 0x0  nop
    ctx->pc = 0x133504u;
    // NOP
    ctx->pc = 0x133508u;
}
