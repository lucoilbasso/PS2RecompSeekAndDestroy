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

// Function: entry_00152ed8
// Address: 0x152ed8 - 0x152f70
void entry_00152ed8_0x152ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152ed8_0x152ed8");
#endif

    switch (ctx->pc) {
        case 0x152ee0u: goto label_152ee0;
        case 0x152ef4u: goto label_152ef4;
        default: break;
    }

    ctx->pc = 0x152ed8u;

    // 0x152ed8: 0xc061422  jal         func_185088
    ctx->pc = 0x152ED8u;
    SET_GPR_U32(ctx, 31, 0x152EE0u);
    ctx->pc = 0x152EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ED8u;
    // 0x152edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x152ED8u, 0x152EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EE0u;
label_152ee0:
    // 0x152ee0: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x152ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
    // 0x152ee4: 0x54540033  bnel        $v0, $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x152EE4u;
    {
        const bool branch_taken_0x152ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x152ee4) {
            ctx->pc = 0x152EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152EE4u;
            // 0x152ee8: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152FB4u;
            return;
        }
    }
    ctx->pc = 0x152EECu;
    // 0x152eec: 0xc059504  jal         func_165410
    ctx->pc = 0x152EECu;
    SET_GPR_U32(ctx, 31, 0x152EF4u);
    ctx->pc = 0x152EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EECu;
    // 0x152ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165410u, 0x152EECu, 0x152EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF4u;
label_152ef4:
    // 0x152ef4: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x152ef8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x152ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x152efc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x152EFCu;
    {
        const bool branch_taken_0x152efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EFCu;
        // 0x152f00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152efc) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152F04u;
    // 0x152f04: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x152f08: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x152f0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x152f10: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x152f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x152f14: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x152f14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x152f18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x152f1c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x152f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x152f20: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152F20u;
    {
        const bool branch_taken_0x152f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F20u;
        // 0x152f24: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f20) {
            ctx->pc = 0x152F80u;
            return;
        }
    }
    ctx->pc = 0x152F28u;
    // 0x152f28: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x152f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x152f2c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x152f30: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x152f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x152f34: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x152F34u;
    {
        const bool branch_taken_0x152f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f34) {
            ctx->pc = 0x152F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152F34u;
            // 0x152f38: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152FB4u;
            return;
        }
    }
    ctx->pc = 0x152F3Cu;
    // 0x152f3c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x152f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x152f40: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x152F40u;
    {
        const bool branch_taken_0x152f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f40) {
            ctx->pc = 0x152F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152F40u;
            // 0x152f44: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152F70u;
            return;
        }
    }
    ctx->pc = 0x152F48u;
    // 0x152f48: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x152f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x152f4c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x152F4Cu;
    {
        const bool branch_taken_0x152f4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x152F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F4Cu;
        // 0x152f50: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f4c) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152F54u;
    // 0x152f54: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x152f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x152f58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152F58u;
    {
        const bool branch_taken_0x152f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F58u;
        // 0x152f5c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f58) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152F60u;
    // 0x152f60: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x152f60u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x152f64: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x152f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x152f68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152F68u;
    {
        const bool branch_taken_0x152f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F68u;
        // 0x152f6c: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f68) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152F70u;
}
