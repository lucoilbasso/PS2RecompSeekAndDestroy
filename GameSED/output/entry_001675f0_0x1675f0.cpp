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

// Function: entry_001675f0
// Address: 0x1675f0 - 0x167620
void entry_001675f0_0x1675f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001675f0_0x1675f0");
#endif

    ctx->pc = 0x1675f0u;

    // 0x1675f0: 0x54400066  bnel        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1675F0u;
    {
        const bool branch_taken_0x1675f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1675f0) {
            ctx->pc = 0x1675F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1675F0u;
            // 0x1675f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16778Cu;
            return;
        }
    }
    ctx->pc = 0x1675F8u;
    // 0x1675f8: 0x10c000d5  beqz        $a2, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1675F8u;
    {
        const bool branch_taken_0x1675f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F8u;
        // 0x1675fc: 0x26651258  addiu       $a1, $s3, 0x1258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675f8) {
            ctx->pc = 0x167950u;
            return;
        }
    }
    ctx->pc = 0x167600u;
    // 0x167600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167604: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16760c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x16760Cu;
    {
        const bool branch_taken_0x16760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16760Cu;
        // 0x167610: 0xae621260  sw          $v0, 0x1260($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16760c) {
            ctx->pc = 0x167668u;
            return;
        }
    }
    ctx->pc = 0x167614u;
    // 0x167614: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x167614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16761c: 0x0  nop
    ctx->pc = 0x16761cu;
    // NOP
    ctx->pc = 0x167620u;
}
