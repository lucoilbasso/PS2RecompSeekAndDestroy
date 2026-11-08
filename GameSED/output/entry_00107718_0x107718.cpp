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

// Function: entry_00107718
// Address: 0x107718 - 0x107730
void entry_00107718_0x107718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107718_0x107718");
#endif

    ctx->pc = 0x107718u;

    // 0x107718: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x107718u;
    {
        const bool branch_taken_0x107718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x107718) {
            ctx->pc = 0x10771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107718u;
            // 0x10771c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107730u;
            return;
        }
    }
    ctx->pc = 0x107720u;
    // 0x107720: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x107720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107724: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x107724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x107728: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107728u;
    {
        const bool branch_taken_0x107728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107728u;
        // 0x10772c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107728) {
            ctx->pc = 0x107748u;
            return;
        }
    }
    ctx->pc = 0x107730u;
}
