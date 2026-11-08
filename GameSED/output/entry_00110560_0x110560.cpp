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

// Function: entry_00110560
// Address: 0x110560 - 0x110590
void entry_00110560_0x110560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110560_0x110560");
#endif

    ctx->pc = 0x110560u;

    // 0x110560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110564: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x110564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x110568: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11056c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x110570: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x110570u;
    {
        const bool branch_taken_0x110570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x110570) {
            ctx->pc = 0x110574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110570u;
            // 0x110574: 0x8c900018  lw          $s0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110590u;
            return;
        }
    }
    ctx->pc = 0x110578u;
    // 0x110578: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11057c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x110580: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x110580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x110584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x110584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x110588: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x110588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x11058c: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x11058cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->pc = 0x110590u;
}
