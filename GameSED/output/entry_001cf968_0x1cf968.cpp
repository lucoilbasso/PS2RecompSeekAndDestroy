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

// Function: entry_001cf968
// Address: 0x1cf968 - 0x1cf978
void entry_001cf968_0x1cf968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf968_0x1cf968");
#endif

    ctx->pc = 0x1cf968u;

    // 0x1cf968: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF968u;
    {
        const bool branch_taken_0x1cf968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf968) {
            ctx->pc = 0x1CF96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF968u;
            // 0x1cf96c: 0x240a007e  addiu       $t2, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF978u;
            return;
        }
    }
    ctx->pc = 0x1CF970u;
    // 0x1cf970: 0x111482  srl         $v0, $s1, 18
    ctx->pc = 0x1cf970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
    // 0x1cf974: 0x244a007c  addiu       $t2, $v0, 0x7C
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    ctx->pc = 0x1cf978u;
}
