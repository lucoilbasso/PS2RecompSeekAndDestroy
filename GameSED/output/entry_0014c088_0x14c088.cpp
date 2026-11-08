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

// Function: entry_0014c088
// Address: 0x14c088 - 0x14c094
void entry_0014c088_0x14c088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c088_0x14c088");
#endif

    ctx->pc = 0x14c088u;

    // 0x14c088: 0x56800002  bnel        $s4, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C088u;
    {
        const bool branch_taken_0x14c088 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c088) {
            ctx->pc = 0x14C08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C088u;
            // 0x14c08c: 0xc62001e4  lwc1        $f0, 0x1E4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C094u;
            return;
        }
    }
    ctx->pc = 0x14C090u;
    // 0x14c090: 0xc62001e0  lwc1        $f0, 0x1E0($s1)
    ctx->pc = 0x14c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x14c094u;
}
