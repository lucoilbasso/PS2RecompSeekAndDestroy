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

// Function: entry_00100608
// Address: 0x100608 - 0x100620
void entry_00100608_0x100608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100608_0x100608");
#endif

    ctx->pc = 0x100608u;

    // 0x100608: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10060c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x10060Cu;
    {
        const bool branch_taken_0x10060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10060c) {
            ctx->pc = 0x100610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10060Cu;
            // 0x100610: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100668u;
            return;
        }
    }
    ctx->pc = 0x100614u;
    // 0x100614: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x100614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x100618: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x100618u;
    {
        const bool branch_taken_0x100618 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100618u;
        // 0x10061c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100618) {
            ctx->pc = 0x100658u;
            return;
        }
    }
    ctx->pc = 0x100620u;
}
