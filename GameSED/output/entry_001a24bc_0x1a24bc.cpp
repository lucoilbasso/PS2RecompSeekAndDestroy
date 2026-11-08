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

// Function: entry_001a24bc
// Address: 0x1a24bc - 0x1a24e8
void entry_001a24bc_0x1a24bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a24bc_0x1a24bc");
#endif

    ctx->pc = 0x1a24bcu;

    // 0x1a24bc: 0x6400036  bltz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A24BCu;
    {
        const bool branch_taken_0x1a24bc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1A24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24BCu;
        // 0x1a24c0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24bc) {
            ctx->pc = 0x1A2598u;
            return;
        }
    }
    ctx->pc = 0x1A24C4u;
    // 0x1a24c4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A24C4u;
    {
        const bool branch_taken_0x1a24c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24c4) {
            ctx->pc = 0x1A24C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A24C4u;
            // 0x1a24c8: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2500u;
            return;
        }
    }
    ctx->pc = 0x1A24CCu;
    // 0x1a24cc: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1a24ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a24d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a24d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a24d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A24D8u;
    {
        const bool branch_taken_0x1a24d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24D8u;
        // 0x1a24dc: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24d8) {
            ctx->pc = 0x1A24E8u;
            return;
        }
    }
    ctx->pc = 0x1A24E0u;
    // 0x1a24e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A24E0u;
    {
        const bool branch_taken_0x1a24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24E0u;
        // 0x1a24e4: 0xc6140000  lwc1        $f20, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24e0) {
            ctx->pc = 0x1A2528u;
            return;
        }
    }
    ctx->pc = 0x1A24E8u;
}
