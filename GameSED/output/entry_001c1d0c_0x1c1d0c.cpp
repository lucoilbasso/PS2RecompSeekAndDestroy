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

// Function: entry_001c1d0c
// Address: 0x1c1d0c - 0x1c1d48
void entry_001c1d0c_0x1c1d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1d0c_0x1c1d0c");
#endif

    ctx->pc = 0x1c1d0cu;

    // 0x1c1d0c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x1c1d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c1d10: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1c1d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x1c1d14: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x1c1d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c1d1c: 0x2665dcc0  addiu       $a1, $s3, -0x2340
    ctx->pc = 0x1c1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1c1d20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1d24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c1d28: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1c1d28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1d2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1d30: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1D30u;
    {
        const bool branch_taken_0x1c1d30 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D30u;
        // 0x1c1d34: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d30) {
            ctx->pc = 0x1C1D6Cu;
            return;
        }
    }
    ctx->pc = 0x1C1D38u;
    // 0x1c1d38: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1c1d38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1d3c: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x1c1d3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x1c1d40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c1d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d44: 0x0  nop
    ctx->pc = 0x1c1d44u;
    // NOP
    ctx->pc = 0x1c1d48u;
}
