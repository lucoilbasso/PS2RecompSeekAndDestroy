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

// Function: entry_00190c08
// Address: 0x190c08 - 0x190c20
void entry_00190c08_0x190c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c08_0x190c08");
#endif

    ctx->pc = 0x190c08u;

    // 0x190c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x190c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190c0c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190C0Cu;
    {
        const bool branch_taken_0x190c0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x190C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C0Cu;
        // 0x190c10: 0xc23fc  dsll32      $a0, $t4, 15 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c0c) {
            ctx->pc = 0x190C24u;
            return;
        }
    }
    ctx->pc = 0x190C14u;
    // 0x190c14: 0x93a20023  lbu         $v0, 0x23($sp)
    ctx->pc = 0x190c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x190c18: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x190c1c: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x190c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x190c20u;
}
