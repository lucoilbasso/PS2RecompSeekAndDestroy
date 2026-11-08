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

// Function: entry_0019c540
// Address: 0x19c540 - 0x19c580
void entry_0019c540_0x19c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c540_0x19c540");
#endif

    ctx->pc = 0x19c540u;

    // 0x19c540: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c544: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c548: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c54c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x19c54cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c550: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x19C550u;
    {
        const bool branch_taken_0x19c550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C550u;
        // 0x19c554: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c550) {
            ctx->pc = 0x19C65Cu;
            return;
        }
    }
    ctx->pc = 0x19C558u;
    // 0x19c558: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c55c: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c560: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19c560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c564: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C564u;
    {
        const bool branch_taken_0x19c564 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C564u;
        // 0x19c568: 0x2445f0f0  addiu       $a1, $v0, -0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c564) {
            ctx->pc = 0x19C5B8u;
            return;
        }
    }
    ctx->pc = 0x19C56Cu;
    // 0x19c56c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c570: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c574: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c57c: 0x0  nop
    ctx->pc = 0x19c57cu;
    // NOP
    ctx->pc = 0x19c580u;
}
