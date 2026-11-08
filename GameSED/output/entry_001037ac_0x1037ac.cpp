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

// Function: entry_001037ac
// Address: 0x1037ac - 0x1037c8
void entry_001037ac_0x1037ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001037ac_0x1037ac");
#endif

    ctx->pc = 0x1037acu;

    // 0x1037ac: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1037ACu;
    {
        const bool branch_taken_0x1037ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037ACu;
        // 0x1037b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037ac) {
            ctx->pc = 0x10383Cu;
            return;
        }
    }
    ctx->pc = 0x1037B4u;
    // 0x1037b4: 0x3c147fff  lui         $s4, 0x7FFF
    ctx->pc = 0x1037b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32767 << 16));
    // 0x1037b8: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1037b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1037bc: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1037bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1037c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1037c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1037c4: 0x0  nop
    ctx->pc = 0x1037c4u;
    // NOP
    ctx->pc = 0x1037c8u;
}
