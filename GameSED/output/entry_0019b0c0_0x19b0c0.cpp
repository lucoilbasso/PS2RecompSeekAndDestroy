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

// Function: entry_0019b0c0
// Address: 0x19b0c0 - 0x19b100
void entry_0019b0c0_0x19b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b0c0_0x19b0c0");
#endif

    ctx->pc = 0x19b0c0u;

    // 0x19b0c0: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x19b0c4: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19b0c8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19b0cc: 0x544300dc  bnel        $v0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x19B0CCu;
    {
        const bool branch_taken_0x19b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b0cc) {
            ctx->pc = 0x19B0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B0CCu;
            // 0x19b0d0: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B440u;
            return;
        }
    }
    ctx->pc = 0x19B0D4u;
    // 0x19b0d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b0d8: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19b0dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19b0e0: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19b0e4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19b0e8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19b0e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ec: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19b0ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b0f0: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x19b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19b0f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19b0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b0f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B0F8u;
    {
        const bool branch_taken_0x19b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0F8u;
        // 0x19b0fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0f8) {
            ctx->pc = 0x19B130u;
            return;
        }
    }
    ctx->pc = 0x19B100u;
}
