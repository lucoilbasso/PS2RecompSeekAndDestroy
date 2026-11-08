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

// Function: entry_00180014
// Address: 0x180014 - 0x180030
void entry_00180014_0x180014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180014_0x180014");
#endif

    ctx->pc = 0x180014u;

    // 0x180014: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x180014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x180018: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x180018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x18001c: 0xa0c4000e  sb          $a0, 0xE($a2)
    ctx->pc = 0x18001cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x180020: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x180020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x180024: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x180024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x180028: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180028u;
    {
        const bool branch_taken_0x180028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180028u;
        // 0x18002c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180028) {
            ctx->pc = 0x18004Cu;
            return;
        }
    }
    ctx->pc = 0x180030u;
}
