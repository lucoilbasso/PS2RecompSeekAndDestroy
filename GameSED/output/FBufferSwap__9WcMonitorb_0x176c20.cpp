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

// Function: FBufferSwap__9WcMonitorb
// Address: 0x176c20 - 0x176e64
void FBufferSwap__9WcMonitorb_0x176c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FBufferSwap__9WcMonitorb_0x176c20");
#endif

    switch (ctx->pc) {
        case 0x176c8cu: goto label_176c8c;
        case 0x176ca0u: goto label_176ca0;
        case 0x176cc4u: goto label_176cc4;
        case 0x176cd0u: goto label_176cd0;
        case 0x176cf0u: goto label_176cf0;
        case 0x176cf8u: goto label_176cf8;
        case 0x176d78u: goto label_176d78;
        case 0x176d9cu: goto label_176d9c;
        case 0x176da8u: goto label_176da8;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dd0u: goto label_176dd0;
        default: break;
    }

    ctx->pc = 0x176c20u;

    // 0x176c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176c24: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x176c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x176c28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x176c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x176c2c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x176c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x176c30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x176c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x176c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x176c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176c3c: 0x26510250  addiu       $s1, $s2, 0x250
    ctx->pc = 0x176c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x176c40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x176c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x176c44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176c48: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x176c48u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x176c4c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x176c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x176c50: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x176c50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x176c54: 0x65880a  movz        $s1, $v1, $a1
    ctx->pc = 0x176c54u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x176c58: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x176c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x176c5c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x176c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x176c60: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x176c60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x176c64: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x176c64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x176c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x176c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x176c6c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x176c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x176c70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x176c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x176c74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x176c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x176c78: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x176c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x176c7c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x176c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x176c80: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x176c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x176c84: 0xc06aa42  jal         func_1AA908
    ctx->pc = 0x176C84u;
    SET_GPR_U32(ctx, 31, 0x176C8Cu);
    ctx->pc = 0x176C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C84u;
    // 0x176c88: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA908u, 0x176C84u, 0x176C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C8Cu;
label_176c8c:
    // 0x176c8c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x176C8Cu;
    {
        const bool branch_taken_0x176c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C8Cu;
        // 0x176c90: 0x26220140  addiu       $v0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c8c) {
            ctx->pc = 0x176D68u;
            goto label_176d68;
        }
    }
    ctx->pc = 0x176C94u;
    // 0x176c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c98: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176C98u;
    SET_GPR_U32(ctx, 31, 0x176CA0u);
    ctx->pc = 0x176C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C98u;
    // 0x176c9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176C98u, 0x176CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CA0u;
label_176ca0:
    // 0x176ca0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176ca4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176ca4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176ca8: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176cac: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176cb0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176cb4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176cb8: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176cbc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176CBCu;
    SET_GPR_U32(ctx, 31, 0x176CC4u);
    ctx->pc = 0x176CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CBCu;
    // 0x176cc0: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176CBCu, 0x176CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CC4u;
label_176cc4:
    // 0x176cc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176cc8: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176ccc: 0x0  nop
    ctx->pc = 0x176cccu;
    // NOP
label_176cd0:
    // 0x176cd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176cd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x176cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176cd8: 0x0  nop
    ctx->pc = 0x176cd8u;
    // NOP
    // 0x176cdc: 0x0  nop
    ctx->pc = 0x176cdcu;
    // NOP
    // 0x176ce0: 0x0  nop
    ctx->pc = 0x176ce0u;
    // NOP
    // 0x176ce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176CE4u;
    {
        const bool branch_taken_0x176ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ce4) {
            ctx->pc = 0x176CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176cd0;
        }
    }
    ctx->pc = 0x176CECu;
    // 0x176cec: 0x0  nop
    ctx->pc = 0x176cecu;
    // NOP
label_176cf0:
    // 0x176cf0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176CF0u;
    SET_GPR_U32(ctx, 31, 0x176CF8u);
    ctx->pc = 0x176CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CF0u;
    // 0x176cf4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176CF0u, 0x176CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CF8u;
label_176cf8:
    // 0x176cf8: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176cfc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176CFCu;
    {
        const bool branch_taken_0x176cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CFCu;
        // 0x176d00: 0x8f858c54  lw          $a1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cfc) {
            ctx->pc = 0x176CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176cf0;
        }
    }
    ctx->pc = 0x176D04u;
    // 0x176d04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176d0c: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176d10: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x176D10u;
    {
        const bool branch_taken_0x176d10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D10u;
        // 0x176d14: 0xacb10020  sw          $s1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d10) {
            ctx->pc = 0x176D30u;
            goto label_176d30;
        }
    }
    ctx->pc = 0x176D18u;
    // 0x176d18: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176d1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176d24: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176D28u;
    {
        const bool branch_taken_0x176d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D28u;
        // 0x176d2c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d28) {
            ctx->pc = 0x176D3Cu;
            goto label_176d3c;
        }
    }
    ctx->pc = 0x176D30u;
label_176d30:
    // 0x176d30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176d38: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_176d3c:
    // 0x176d3c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x176d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x176d40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176d44: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x176d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176d48: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x176d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176d4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176d50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176d54: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176d58: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176d5c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x176D5Cu;
    {
        const bool branch_taken_0x176d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D5Cu;
        // 0x176d60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d5c) {
            ctx->pc = 0x176E38u;
            goto label_176e38;
        }
    }
    ctx->pc = 0x176D64u;
    // 0x176d64: 0x0  nop
    ctx->pc = 0x176d64u;
    // NOP
label_176d68:
    // 0x176d68: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x176d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x176d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d70: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x176D70u;
    SET_GPR_U32(ctx, 31, 0x176D78u);
    ctx->pc = 0x176D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D70u;
    // 0x176d74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x176D70u, 0x176D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D78u;
label_176d78:
    // 0x176d78: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x176d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x176d7c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x176d7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176d80: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x176d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x176d84: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176d88: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x176d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x176d8c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x176d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176d90: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176d94: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176D94u;
    SET_GPR_U32(ctx, 31, 0x176D9Cu);
    ctx->pc = 0x176D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D94u;
    // 0x176d98: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176D94u, 0x176D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D9Cu;
label_176d9c:
    // 0x176d9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x176d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176da0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176da4: 0x0  nop
    ctx->pc = 0x176da4u;
    // NOP
label_176da8:
    // 0x176da8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176dac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x176dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176db0: 0x0  nop
    ctx->pc = 0x176db0u;
    // NOP
    // 0x176db4: 0x0  nop
    ctx->pc = 0x176db4u;
    // NOP
    // 0x176db8: 0x0  nop
    ctx->pc = 0x176db8u;
    // NOP
    // 0x176dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176DBCu;
    {
        const bool branch_taken_0x176dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176dbc) {
            ctx->pc = 0x176DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176da8;
        }
    }
    ctx->pc = 0x176DC4u;
    // 0x176dc4: 0x0  nop
    ctx->pc = 0x176dc4u;
    // NOP
label_176dc8:
    // 0x176dc8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176DC8u;
    SET_GPR_U32(ctx, 31, 0x176DD0u);
    ctx->pc = 0x176DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DC8u;
    // 0x176dcc: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176DC8u, 0x176DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DD0u;
label_176dd0:
    // 0x176dd0: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176dd4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176DD4u;
    {
        const bool branch_taken_0x176dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DD4u;
        // 0x176dd8: 0x8f858c54  lw          $a1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dd4) {
            ctx->pc = 0x176DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176dc8;
        }
    }
    ctx->pc = 0x176DDCu;
    // 0x176ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176de0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176de4: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176de8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x176DE8u;
    {
        const bool branch_taken_0x176de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DE8u;
        // 0x176dec: 0xacb10020  sw          $s1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176de8) {
            ctx->pc = 0x176E08u;
            goto label_176e08;
        }
    }
    ctx->pc = 0x176DF0u;
    // 0x176df0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176df4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176df8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176dfc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176E00u;
    {
        const bool branch_taken_0x176e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E00u;
        // 0x176e04: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e00) {
            ctx->pc = 0x176E14u;
            goto label_176e14;
        }
    }
    ctx->pc = 0x176E08u;
label_176e08:
    // 0x176e08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176e10: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_176e14:
    // 0x176e14: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x176e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x176e18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x176e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176e1c: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x176e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176e20: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x176e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176e28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176e2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176e30: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176e34: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x176e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_176e38:
    // 0x176e38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x176e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x176e3c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x176e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x176e40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x176e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176e44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176e48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x176e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176e4c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x176e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x176e50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x176e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176e54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x176e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176e58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x176E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E5Cu;
        // 0x176e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176E64u;
}
