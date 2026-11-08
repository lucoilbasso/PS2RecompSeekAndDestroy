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

// Function: entry_001cbb88
// Address: 0x1cbb88 - 0x1cbbb8
void entry_001cbb88_0x1cbb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb88_0x1cbb88");
#endif

    ctx->pc = 0x1cbb88u;

    // 0x1cbb88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbb8c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cbb90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cbb94: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cbb98: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbb9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CBB9Cu;
    {
        const bool branch_taken_0x1cbb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB9Cu;
        // 0x1cbba0: 0xafa504a4  sw          $a1, 0x4A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb9c) {
            ctx->pc = 0x1CBBE8u;
            return;
        }
    }
    ctx->pc = 0x1CBBA4u;
    // 0x1cbba4: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x1cbba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cbba8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBBA8u;
    {
        const bool branch_taken_0x1cbba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA8u;
        // 0x1cbbac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba8) {
            ctx->pc = 0x1CBBECu;
            return;
        }
    }
    ctx->pc = 0x1CBBB0u;
    // 0x1cbbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbb4: 0x0  nop
    ctx->pc = 0x1cbbb4u;
    // NOP
    ctx->pc = 0x1cbbb8u;
}
