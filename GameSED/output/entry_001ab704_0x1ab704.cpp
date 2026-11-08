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

// Function: entry_001ab704
// Address: 0x1ab704 - 0x1ab728
void entry_001ab704_0x1ab704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab704_0x1ab704");
#endif

    ctx->pc = 0x1ab704u;

    // 0x1ab704: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab708: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ab708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ab70c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ab70cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1ab710: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1ab710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1ab714: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB714u;
    {
        const bool branch_taken_0x1ab714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB714u;
        // 0x1ab718: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab714) {
            ctx->pc = 0x1AB744u;
            return;
        }
    }
    ctx->pc = 0x1AB71Cu;
    // 0x1ab71c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ab71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1ab720: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1ab720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1ab724: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ab728u;
}
