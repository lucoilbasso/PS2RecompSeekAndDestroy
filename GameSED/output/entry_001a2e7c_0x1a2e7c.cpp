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

// Function: entry_001a2e7c
// Address: 0x1a2e7c - 0x1a2eb8
void entry_001a2e7c_0x1a2e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2e7c_0x1a2e7c");
#endif

    ctx->pc = 0x1a2e7cu;

    // 0x1a2e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2e80: 0x6420035  bltzl       $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A2E80u;
    {
        const bool branch_taken_0x1a2e80 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1a2e80) {
            ctx->pc = 0x1A2E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2E80u;
            // 0x1a2e84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2F58u;
            return;
        }
    }
    ctx->pc = 0x1A2E88u;
    // 0x1a2e88: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A2E88u;
    {
        const bool branch_taken_0x1a2e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e88) {
            ctx->pc = 0x1A2E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2E88u;
            // 0x1a2e8c: 0x86020030  lh          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2F28u;
            return;
        }
    }
    ctx->pc = 0x1A2E90u;
    // 0x1a2e90: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x1a2e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1a2e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a2e98: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a2e9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2E9Cu;
    {
        const bool branch_taken_0x1a2e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0xa6020032  sh          $v0, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e9c) {
            ctx->pc = 0x1A2EB8u;
            return;
        }
    }
    ctx->pc = 0x1A2EA4u;
    // 0x1a2ea4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2ea8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1a2eac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2EACu;
    {
        const bool branch_taken_0x1a2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EACu;
        // 0x1a2eb0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eac) {
            ctx->pc = 0x1A2EDCu;
            return;
        }
    }
    ctx->pc = 0x1A2EB4u;
    // 0x1a2eb4: 0x0  nop
    ctx->pc = 0x1a2eb4u;
    // NOP
    ctx->pc = 0x1a2eb8u;
}
