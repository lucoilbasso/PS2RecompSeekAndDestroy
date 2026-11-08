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

// Function: entry_001c8078
// Address: 0x1c8078 - 0x1c80b8
void entry_001c8078_0x1c8078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8078_0x1c8078");
#endif

    ctx->pc = 0x1c8078u;

    // 0x1c8078: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8078u;
    {
        const bool branch_taken_0x1c8078 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c8078) {
            ctx->pc = 0x1C807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8078u;
            // 0x1c807c: 0x2862ffcb  slti        $v0, $v1, -0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C80B8u;
            return;
        }
    }
    ctx->pc = 0x1C8080u;
    // 0x1c8080: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1c8080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1c8084: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x1c8084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x1c8088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c808c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8090: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c8090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c8094: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1c8094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1c8098: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c8098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c809c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c80a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c80a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c80a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c80a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c80a8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1c80a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c80ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c80acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C80B0u;
    {
        const bool branch_taken_0x1c80b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80B0u;
        // 0x1c80b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80b0) {
            ctx->pc = 0x1C815Cu;
            return;
        }
    }
    ctx->pc = 0x1C80B8u;
}
