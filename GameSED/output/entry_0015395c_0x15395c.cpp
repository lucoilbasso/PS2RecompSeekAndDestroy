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

// Function: entry_0015395c
// Address: 0x15395c - 0x1539dc
void entry_0015395c_0x15395c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015395c_0x15395c");
#endif

    ctx->pc = 0x15395cu;

    // 0x15395c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x15395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x153960: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x153960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x153964: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x153964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x153968: 0x1460023a  bnez        $v1, . + 4 + (0x23A << 2)
    ctx->pc = 0x153968u;
    {
        const bool branch_taken_0x153968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153968u;
        // 0x15396c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153968) {
            ctx->pc = 0x154254u;
            return;
        }
    }
    ctx->pc = 0x153970u;
    // 0x153970: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x153970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x153974: 0x50400238  beql        $v0, $zero, . + 4 + (0x238 << 2)
    ctx->pc = 0x153974u;
    {
        const bool branch_taken_0x153974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153974) {
            ctx->pc = 0x153978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153974u;
            // 0x153978: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            return;
        }
    }
    ctx->pc = 0x15397Cu;
    // 0x15397c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x15397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x153980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153984: 0x50600234  beql        $v1, $zero, . + 4 + (0x234 << 2)
    ctx->pc = 0x153984u;
    {
        const bool branch_taken_0x153984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153984) {
            ctx->pc = 0x153988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153984u;
            // 0x153988: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            return;
        }
    }
    ctx->pc = 0x15398Cu;
    // 0x15398c: 0x8e220680  lw          $v0, 0x680($s1)
    ctx->pc = 0x15398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    // 0x153990: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x153990u;
    {
        const bool branch_taken_0x153990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153990u;
        // 0x153994: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153990) {
            ctx->pc = 0x1539DCu;
            return;
        }
    }
    ctx->pc = 0x153998u;
    // 0x153998: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x153998u;
    {
        const bool branch_taken_0x153998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153998u;
        // 0x15399c: 0xae220680  sw          $v0, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153998) {
            ctx->pc = 0x1539DCu;
            return;
        }
    }
    ctx->pc = 0x1539A0u;
    // 0x1539a0: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1539a4: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1539a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1539a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1539ac: 0x344277ff  ori         $v0, $v0, 0x77FF
    ctx->pc = 0x1539acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30719);
    // 0x1539b0: 0x262503b0  addiu       $a1, $s1, 0x3B0
    ctx->pc = 0x1539b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x1539b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1539b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1539b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1539bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1539c0: 0x2406dfff  addiu       $a2, $zero, -0x2001
    ctx->pc = 0x1539c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1539c4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1539c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1539c8: 0xaca002d0  sw          $zero, 0x2D0($a1)
    ctx->pc = 0x1539c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 720), GPR_U32(ctx, 0));
    // 0x1539cc: 0xe4a002d4  swc1        $f0, 0x2D4($a1)
    ctx->pc = 0x1539ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 724), bits); }
    // 0x1539d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1539d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1539d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1539d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1539d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1539dcu;
}
