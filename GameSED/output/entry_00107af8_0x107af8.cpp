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

// Function: entry_00107af8
// Address: 0x107af8 - 0x107b08
void entry_00107af8_0x107af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107af8_0x107af8");
#endif

    ctx->pc = 0x107af8u;

    // 0x107af8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x107af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x107afc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107AFCu;
    {
        const bool branch_taken_0x107afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AFCu;
        // 0x107b00: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107afc) {
            ctx->pc = 0x107B34u;
            return;
        }
    }
    ctx->pc = 0x107B04u;
    // 0x107b04: 0x0  nop
    ctx->pc = 0x107b04u;
    // NOP
    ctx->pc = 0x107b08u;
}
