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

// Function: entry_0019b130
// Address: 0x19b130 - 0x19b160
void entry_0019b130_0x19b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b130_0x19b130");
#endif

    ctx->pc = 0x19b130u;

    // 0x19b130: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x19b130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x19b134: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19b138: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b13c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x19B13Cu;
    {
        const bool branch_taken_0x19b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B13Cu;
        // 0x19b140: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b13c) {
            ctx->pc = 0x19B198u;
            return;
        }
    }
    ctx->pc = 0x19B144u;
    // 0x19b144: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b148: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x19b148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b14c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19b14cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b150: 0x24e2ffd0  addiu       $v0, $a3, -0x30
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x19b154: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19b154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b158: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B158u;
    {
        const bool branch_taken_0x19b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B158u;
        // 0x19b15c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b158) {
            ctx->pc = 0x19B190u;
            return;
        }
    }
    ctx->pc = 0x19B160u;
}
