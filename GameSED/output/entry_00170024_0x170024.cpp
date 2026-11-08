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

// Function: entry_00170024
// Address: 0x170024 - 0x170034
void entry_00170024_0x170024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170024_0x170024");
#endif

    ctx->pc = 0x170024u;

    // 0x170024: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x170024u;
    {
        const bool branch_taken_0x170024 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x170024) {
            ctx->pc = 0x170034u;
            return;
        }
    }
    ctx->pc = 0x17002Cu;
    // 0x17002c: 0x5660000c  bnel        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17002Cu;
    {
        const bool branch_taken_0x17002c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x17002c) {
            ctx->pc = 0x170030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17002Cu;
            // 0x170030: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170060u;
            return;
        }
    }
    ctx->pc = 0x170034u;
}
