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

// Function: entry_001d3480
// Address: 0x1d3480 - 0x1d3500
void entry_001d3480_0x1d3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3480_0x1d3480");
#endif

    switch (ctx->pc) {
        case 0x1d348cu: goto label_1d348c;
        case 0x1d34fcu: goto label_1d34fc;
        default: break;
    }

    ctx->pc = 0x1d3480u;

    // 0x1d3480: 0x8ee50044  lw          $a1, 0x44($s7)
    ctx->pc = 0x1d3480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x1d3484: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D3484u;
    SET_GPR_U32(ctx, 31, 0x1D348Cu);
    ctx->pc = 0x1D3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3484u;
    // 0x1d3488: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D3484u, 0x1D348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D348Cu;
label_1d348c:
    // 0x1d348c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1d348cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1d3490: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d3490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3494: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d3498: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1d3498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1d349c: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x1d349cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
    // 0x1d34a0: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x1D34A0u;
    {
        const bool branch_taken_0x1d34a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34A0u;
        // 0x1d34a4: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34a0) {
            ctx->pc = 0x1D38F0u;
            return;
        }
    }
    ctx->pc = 0x1D34A8u;
    // 0x1d34a8: 0x52200112  beql        $s1, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x1D34A8u;
    {
        const bool branch_taken_0x1d34a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34a8) {
            ctx->pc = 0x1D34ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D34A8u;
            // 0x1d34ac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D38F4u;
            return;
        }
    }
    ctx->pc = 0x1D34B0u;
    // 0x1d34b0: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1d34b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34b4: 0xafbe002c  sw          $fp, 0x2C($sp)
    ctx->pc = 0x1d34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
    // 0x1d34b8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1d34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1d34bc: 0x1bc00026  blez        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D34BCu;
    {
        const bool branch_taken_0x1d34bc = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1D34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34BCu;
        // 0x1d34c0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34bc) {
            ctx->pc = 0x1D3558u;
            return;
        }
    }
    ctx->pc = 0x1D34C4u;
    // 0x1d34c4: 0x33c2000f  andi        $v0, $fp, 0xF
    ctx->pc = 0x1d34c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x1d34c8: 0x1e8103  sra         $s0, $fp, 4
    ctx->pc = 0x1d34c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
    // 0x1d34cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d34d0: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x1d34d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x1d34d4: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x1d34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x1d34d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d34dc: 0xde31c680  ld          $s1, -0x3980($s1)
    ctx->pc = 0x1d34dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294952576)));
    // 0x1d34e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D34E0u;
    {
        const bool branch_taken_0x1d34e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34E0u;
        // 0x1d34e4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34e0) {
            ctx->pc = 0x1D3500u;
            return;
        }
    }
    ctx->pc = 0x1D34E8u;
    // 0x1d34e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34ec: 0xdc45c768  ld          $a1, -0x3898($v0)
    ctx->pc = 0x1d34ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294952808)));
    // 0x1d34f0: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x1d34f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1d34f4: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D34F4u;
    SET_GPR_U32(ctx, 31, 0x1D34FCu);
    ctx->pc = 0x1D34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34F4u;
    // 0x1d34f8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D34F4u, 0x1D34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34FCu;
label_1d34fc:
    // 0x1d34fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3500u;
}
