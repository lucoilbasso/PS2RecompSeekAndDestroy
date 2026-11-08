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

// Function: entry_00128120
// Address: 0x128120 - 0x128148
void entry_00128120_0x128120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128120_0x128120");
#endif

    ctx->pc = 0x128120u;

    // 0x128120: 0x54820027  bnel        $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x128120u;
    {
        const bool branch_taken_0x128120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x128120) {
            ctx->pc = 0x128124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128120u;
            // 0x128124: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281C0u;
            return;
        }
    }
    ctx->pc = 0x128128u;
    // 0x128128: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x128128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12812c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128130: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x128130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x128134: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x128138: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x128138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x12813c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12813Cu;
    {
        const bool branch_taken_0x12813c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12813Cu;
        // 0x128140: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12813c) {
            ctx->pc = 0x128148u;
            return;
        }
    }
    ctx->pc = 0x128144u;
    // 0x128144: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x128144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x128148u;
}
