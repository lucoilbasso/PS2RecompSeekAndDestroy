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

// Function: entry_0014abe0
// Address: 0x14abe0 - 0x14ac08
void entry_0014abe0_0x14abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014abe0_0x14abe0");
#endif

    ctx->pc = 0x14abe0u;

    // 0x14abe0: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x14abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x14abe4: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14ABE4u;
    {
        const bool branch_taken_0x14abe4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x14ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABE4u;
        // 0x14abe8: 0xa21101ab  sb          $s1, 0x1AB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 427), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abe4) {
            ctx->pc = 0x14AC3Cu;
            return;
        }
    }
    ctx->pc = 0x14ABECu;
    // 0x14abec: 0x119140  sll         $s2, $s1, 5
    ctx->pc = 0x14abecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14abf0: 0x261101c0  addiu       $s1, $s0, 0x1C0
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x14abf4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x14abf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14abf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abfc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14ABFCu;
    {
        const bool branch_taken_0x14abfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABFCu;
        // 0x14ac00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abfc) {
            ctx->pc = 0x14AC08u;
            return;
        }
    }
    ctx->pc = 0x14AC04u;
    // 0x14ac04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x14ac08u;
}
