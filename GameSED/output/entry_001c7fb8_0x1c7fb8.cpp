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

// Function: entry_001c7fb8
// Address: 0x1c7fb8 - 0x1c8030
void entry_001c7fb8_0x1c7fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7fb8_0x1c7fb8");
#endif

    switch (ctx->pc) {
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c8024u: goto label_1c8024;
        default: break;
    }

    ctx->pc = 0x1c7fb8u;

    // 0x1c7fb8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C7FB8u;
    {
        const bool branch_taken_0x1c7fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FB8u;
        // 0x1c7fbc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fb8) {
            ctx->pc = 0x1C8030u;
            return;
        }
    }
    ctx->pc = 0x1C7FC0u;
    // 0x1c7fc0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1c7fc4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c7fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c7fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c7fcc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1c7fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c7fd0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1c7fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c7fd4: 0x50600061  beql        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C7FD4u;
    {
        const bool branch_taken_0x1c7fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fd4) {
            ctx->pc = 0x1C7FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7FD4u;
            // 0x1c7fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C815Cu;
            return;
        }
    }
    ctx->pc = 0x1C7FDCu;
    // 0x1c7fdc: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x1c7fe0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c7fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c7fe4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7FE4u;
    SET_GPR_U32(ctx, 31, 0x1C7FECu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7FE4u, 0x1C7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FECu;
label_1c7fec:
    // 0x1c7fec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c7fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ff0: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x1c7ff0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c7ff4: 0xf11824  and         $v1, $a3, $s1
    ctx->pc = 0x1c7ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x1c7ff8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7ffc: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x1c7ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x1c8000: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x1c8004: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c8004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8008: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8008u;
    {
        const bool branch_taken_0x1c8008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8008u;
        // 0x1c800c: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8008) {
            ctx->pc = 0x1C8030u;
            return;
        }
    }
    ctx->pc = 0x1C8010u;
    // 0x1c8010: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8014: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8018: 0xdc45bbd0  ld          $a1, -0x4430($v0)
    ctx->pc = 0x1c8018u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BBD0u));
    // 0x1c801c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C801Cu;
    SET_GPR_U32(ctx, 31, 0x1C8024u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C801Cu, 0x1C8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8024u;
label_1c8024:
    // 0x1c8024: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C8024u;
    {
        const bool branch_taken_0x1c8024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8024u;
        // 0x1c8028: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8024) {
            ctx->pc = 0x1C815Cu;
            return;
        }
    }
    ctx->pc = 0x1C802Cu;
    // 0x1c802c: 0x0  nop
    ctx->pc = 0x1c802cu;
    // NOP
    ctx->pc = 0x1c8030u;
}
