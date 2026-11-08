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

// Function: entry_0012ef08
// Address: 0x12ef08 - 0x12ef44
void entry_0012ef08_0x12ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef08_0x12ef08");
#endif

    ctx->pc = 0x12ef08u;

    // 0x12ef08: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x12EF08u;
    {
        const bool branch_taken_0x12ef08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef08) {
            ctx->pc = 0x12EF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF08u;
            // 0x12ef0c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF48u;
            return;
        }
    }
    ctx->pc = 0x12EF10u;
    // 0x12ef10: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x12ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x12ef14: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ef18: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12EF18u;
    {
        const bool branch_taken_0x12ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef18) {
            ctx->pc = 0x12EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF18u;
            // 0x12ef1c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF48u;
            return;
        }
    }
    ctx->pc = 0x12EF20u;
    // 0x12ef20: 0x96020124  lhu         $v0, 0x124($s0)
    ctx->pc = 0x12ef20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x12ef24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ef28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x12ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ef2c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x12ef2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12ef30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EF30u;
    {
        const bool branch_taken_0x12ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0xa6020124  sh          $v0, 0x124($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef30) {
            ctx->pc = 0x12EF44u;
            return;
        }
    }
    ctx->pc = 0x12EF38u;
    // 0x12ef38: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x12ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12ef3c: 0xa6000124  sh          $zero, 0x124($s0)
    ctx->pc = 0x12ef3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x12ef40: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x12ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    ctx->pc = 0x12ef44u;
}
