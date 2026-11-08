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

// Function: entry_0019874c
// Address: 0x19874c - 0x19876c
void entry_0019874c_0x19874c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019874c_0x19874c");
#endif

    ctx->pc = 0x19874cu;

    // 0x19874c: 0x8fc201c4  lw          $v0, 0x1C4($fp)
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 452)));
    // 0x198750: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198750u;
    {
        const bool branch_taken_0x198750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198750u;
        // 0x198754: 0xae0403ec  sw          $a0, 0x3EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198750) {
            ctx->pc = 0x19876Cu;
            return;
        }
    }
    ctx->pc = 0x198758u;
    // 0x198758: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198758u;
    {
        const bool branch_taken_0x198758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x198758) {
            ctx->pc = 0x19875Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198758u;
            // 0x19875c: 0x8ea201a8  lw          $v0, 0x1A8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198770u;
            return;
        }
    }
    ctx->pc = 0x198760u;
    // 0x198760: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198764: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x198764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x198768: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x198768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19876cu;
}
