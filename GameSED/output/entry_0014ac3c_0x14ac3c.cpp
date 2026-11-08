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

// Function: entry_0014ac3c
// Address: 0x14ac3c - 0x14ac58
void entry_0014ac3c_0x14ac3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac3c_0x14ac3c");
#endif

    ctx->pc = 0x14ac3cu;

    // 0x14ac3c: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ac3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ac40: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14AC40u;
    {
        const bool branch_taken_0x14ac40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC40u;
        // 0x14ac44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac40) {
            ctx->pc = 0x14AC8Cu;
            return;
        }
    }
    ctx->pc = 0x14AC48u;
    // 0x14ac48: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ac4c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x14ac4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14ac50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac54: 0x0  nop
    ctx->pc = 0x14ac54u;
    // NOP
    ctx->pc = 0x14ac58u;
}
