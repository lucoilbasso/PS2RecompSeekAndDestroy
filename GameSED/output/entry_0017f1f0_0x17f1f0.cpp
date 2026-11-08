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

// Function: entry_0017f1f0
// Address: 0x17f1f0 - 0x17f218
void entry_0017f1f0_0x17f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1f0_0x17f1f0");
#endif

    ctx->pc = 0x17f1f0u;

    // 0x17f1f0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x17f1f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1f4: 0x12400074  beqz        $s2, . + 4 + (0x74 << 2)
    ctx->pc = 0x17F1F4u;
    {
        const bool branch_taken_0x17f1f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1F4u;
        // 0x17f1f8: 0x2823821  addu        $a3, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1f4) {
            ctx->pc = 0x17F3C8u;
            return;
        }
    }
    ctx->pc = 0x17F1FCu;
    // 0x17f1fc: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17f200: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f204: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x17f204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f208: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x17f20c: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x17f20cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17f210: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x17f210u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17f214: 0xf7ff8  dsll        $t7, $t7, 31
    ctx->pc = 0x17f214u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 31);
    ctx->pc = 0x17f218u;
}
