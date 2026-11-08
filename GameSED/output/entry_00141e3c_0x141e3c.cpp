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

// Function: entry_00141e3c
// Address: 0x141e3c - 0x141e44
void entry_00141e3c_0x141e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e3c_0x141e3c");
#endif

    ctx->pc = 0x141e3cu;

    // 0x141e3c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x141E3Cu;
    {
        const bool branch_taken_0x141e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e3c) {
            ctx->pc = 0x141E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141E3Cu;
            // 0x141e40: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141E44u;
            return;
        }
    }
    ctx->pc = 0x141E44u;
}
