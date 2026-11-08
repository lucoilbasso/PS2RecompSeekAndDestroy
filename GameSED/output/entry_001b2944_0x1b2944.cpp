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

// Function: entry_001b2944
// Address: 0x1b2944 - 0x1b2970
void entry_001b2944_0x1b2944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2944_0x1b2944");
#endif

    ctx->pc = 0x1b2944u;

    // 0x1b2944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2948: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x1b2948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b294c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1b294cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b2950: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2950u;
    {
        const bool branch_taken_0x1b2950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2950u;
        // 0x1b2954: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2950) {
            ctx->pc = 0x1B299Cu;
            return;
        }
    }
    ctx->pc = 0x1B2958u;
    // 0x1b2958: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1b295c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b295cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2960: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b2960u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b2964: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b2964u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b2968: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b296c: 0x0  nop
    ctx->pc = 0x1b296cu;
    // NOP
    ctx->pc = 0x1b2970u;
}
