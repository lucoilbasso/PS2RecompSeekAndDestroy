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

// Function: entry_0019f928
// Address: 0x19f928 - 0x19f958
void entry_0019f928_0x19f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f928_0x19f928");
#endif

    ctx->pc = 0x19f928u;

    // 0x19f928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f92c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19F92Cu;
    {
        const bool branch_taken_0x19f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F92Cu;
        // 0x19f930: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f92c) {
            ctx->pc = 0x19F98Cu;
            return;
        }
    }
    ctx->pc = 0x19F934u;
    // 0x19f934: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19f934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f938: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f93c: 0x8a1024  and         $v0, $a0, $t2
    ctx->pc = 0x19f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x19f940: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x19F940u;
    {
        const bool branch_taken_0x19f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f940) {
            ctx->pc = 0x19F944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F940u;
            // 0x19f944: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F98Cu;
            return;
        }
    }
    ctx->pc = 0x19F948u;
    // 0x19f948: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x19f948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x19f94c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x19f94cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x19f950: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19f950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19f954: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x19f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    ctx->pc = 0x19f958u;
}
