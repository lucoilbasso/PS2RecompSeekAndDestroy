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

// Function: entry_0014bd90
// Address: 0x14bd90 - 0x14bdf8
void entry_0014bd90_0x14bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd90_0x14bd90");
#endif

    ctx->pc = 0x14bd90u;

    // 0x14bd90: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14bd94: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14BD94u;
    {
        const bool branch_taken_0x14bd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bd94) {
            ctx->pc = 0x14BD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD94u;
            // 0x14bd98: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE50u;
            return;
        }
    }
    ctx->pc = 0x14BD9Cu;
    // 0x14bd9c: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14bda0: 0x24041118  addiu       $a0, $zero, 0x1118
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14bda4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14bda8: 0xace2023c  sw          $v0, 0x23C($a3)
    ctx->pc = 0x14bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
    // 0x14bdac: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x14bdacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bdb0: 0x1464002d  bne         $v1, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14BDB0u;
    {
        const bool branch_taken_0x14bdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDB0u;
        // 0x14bdb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdb0) {
            ctx->pc = 0x14BE68u;
            return;
        }
    }
    ctx->pc = 0x14BDB8u;
    // 0x14bdb8: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14bdbc: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14bdc0: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14bdc4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x14BDC4u;
    {
        const bool branch_taken_0x14bdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bdc4) {
            ctx->pc = 0x14BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BDC4u;
            // 0x14bdc8: 0x8ca200d4  lw          $v0, 0xD4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE28u;
            return;
        }
    }
    ctx->pc = 0x14BDCCu;
    // 0x14bdcc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x14bdd0: 0xa4e60238  sh          $a2, 0x238($a3)
    ctx->pc = 0x14bdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 6));
    // 0x14bdd4: 0x2445fcb0  addiu       $a1, $v0, -0x350
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x14bdd8: 0xa4e0023a  sh          $zero, 0x23A($a3)
    ctx->pc = 0x14bdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 0));
    // 0x14bddc: 0x8ca20480  lw          $v0, 0x480($a1)
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x240130u));
    // 0x14bde0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14bde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bde4: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14BDE4u;
    {
        const bool branch_taken_0x14bde4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE4u;
        // 0x14bde8: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bde4) {
            ctx->pc = 0x14BE70u;
            return;
        }
    }
    ctx->pc = 0x14BDECu;
    // 0x14bdec: 0x24633630  addiu       $v1, $v1, 0x3630
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13872));
    // 0x14bdf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14bdf4: 0x0  nop
    ctx->pc = 0x14bdf4u;
    // NOP
    ctx->pc = 0x14bdf8u;
}
