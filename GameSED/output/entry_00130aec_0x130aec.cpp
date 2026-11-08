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

// Function: entry_00130aec
// Address: 0x130aec - 0x130b20
void entry_00130aec_0x130aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130aec_0x130aec");
#endif

    ctx->pc = 0x130aecu;

    // 0x130aec: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x130aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x130af0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130af4: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x130AF4u;
    {
        const bool branch_taken_0x130af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x130af4) {
            ctx->pc = 0x130AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130AF4u;
            // 0x130af8: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130B80u;
            return;
        }
    }
    ctx->pc = 0x130AFCu;
    // 0x130afc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x130afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b00: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x130b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x130b04: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x130b04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x130b08: 0x24e4002c  addiu       $a0, $a3, 0x2C
    ctx->pc = 0x130b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x130b0c: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x130b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x130b10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130b14: 0xa6030132  sh          $v1, 0x132($s0)
    ctx->pc = 0x130b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x130b18: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x130b18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x130b1c: 0x0  nop
    ctx->pc = 0x130b1cu;
    // NOP
    ctx->pc = 0x130b20u;
}
