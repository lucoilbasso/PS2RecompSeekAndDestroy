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

// Function: entry_001cf744
// Address: 0x1cf744 - 0x1cf7c8
void entry_001cf744_0x1cf744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf744_0x1cf744");
#endif

    switch (ctx->pc) {
        case 0x1cf76cu: goto label_1cf76c;
        default: break;
    }

    ctx->pc = 0x1cf744u;

    // 0x1cf744: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1cf744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1cf748: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1cf748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1cf74c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1cf74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1cf750: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf754: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x1cf754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1cf758: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cf758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cf75c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1cf75cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1cf760: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1cf764: 0xc0740ce  jal         func_1D0338
    ctx->pc = 0x1CF764u;
    SET_GPR_U32(ctx, 31, 0x1CF76Cu);
    ctx->pc = 0x1CF768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF764u;
    // 0x1cf768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0338u, 0x1CF764u, 0x1CF76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF76Cu;
label_1cf76c:
    // 0x1cf76c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf774: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CF774u;
    {
        const bool branch_taken_0x1cf774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF774u;
        // 0x1cf778: 0x912023  subu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf774) {
            ctx->pc = 0x1CF838u;
            return;
        }
    }
    ctx->pc = 0x1CF77Cu;
    // 0x1cf77c: 0x27c5e5e8  addiu       $a1, $fp, -0x1A18
    ctx->pc = 0x1cf77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960616));
    // 0x1cf780: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf784: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1cf784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1cf788: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1cf788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1cf78c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1cf78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1cf790: 0x24c3e1b8  addiu       $v1, $a2, -0x1E48
    ctx->pc = 0x1cf790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959544));
    // 0x1cf794: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cf794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cf798: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1cf798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1cf79c: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x1cf79cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x24E1C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24E1C0u, _value); } while (0);
    // 0x1cf7a0: 0x12830018  beq         $s4, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CF7A0u;
    {
        const bool branch_taken_0x1cf7a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A0u;
        // 0x1cf7a4: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7a0) {
            ctx->pc = 0x1CF804u;
            return;
        }
    }
    ctx->pc = 0x1CF7A8u;
    // 0x1cf7a8: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x1cf7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cf7ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF7ACu;
    {
        const bool branch_taken_0x1cf7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7ac) {
            ctx->pc = 0x1CF7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF7ACu;
            // 0x1cf7b0: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF7C8u;
            return;
        }
    }
    ctx->pc = 0x1CF7B4u;
    // 0x1cf7b4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1cf7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf7bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CF7BCu;
    {
        const bool branch_taken_0x1cf7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7BCu;
        // 0x1cf7c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7bc) {
            ctx->pc = 0x1CF838u;
            return;
        }
    }
    ctx->pc = 0x1CF7C4u;
    // 0x1cf7c4: 0x0  nop
    ctx->pc = 0x1cf7c4u;
    // NOP
    ctx->pc = 0x1cf7c8u;
}
