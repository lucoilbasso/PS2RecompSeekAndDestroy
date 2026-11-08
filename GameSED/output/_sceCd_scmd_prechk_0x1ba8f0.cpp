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

// Function: _sceCd_scmd_prechk
// Address: 0x1ba8f0 - 0x1baa60
void _sceCd_scmd_prechk_0x1ba8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_scmd_prechk_0x1ba8f0");
#endif

    switch (ctx->pc) {
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1baa10u: goto label_1baa10;
        case 0x1baa18u: goto label_1baa18;
        default: break;
    }

    ctx->pc = 0x1ba8f0u;

    // 0x1ba8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba8f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ba8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ba8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba8fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba900: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba904: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba908: 0xc06e810  jal         func_1BA040
    ctx->pc = 0x1BA908u;
    SET_GPR_U32(ctx, 31, 0x1BA910u);
    ctx->pc = 0x1BA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA908u;
    // 0x1ba90c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA040u, 0x1BA908u, 0x1BA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA910u;
label_1ba910:
    // 0x1ba910: 0x8e04c0ac  lw          $a0, -0x3F54($s0)
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951084)));
    // 0x1ba914: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1BA914u;
    SET_GPR_U32(ctx, 31, 0x1BA91Cu);
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1BA914u, 0x1BA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA91Cu;
label_1ba91c:
    // 0x1ba91c: 0x8e03c0ac  lw          $v1, -0x3F54($s0)
    ctx->pc = 0x1ba91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951084)));
    // 0x1ba920: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA920u;
    {
        const bool branch_taken_0x1ba920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA920u;
        // 0x1ba924: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba920) {
            ctx->pc = 0x1BA950u;
            goto label_1ba950;
        }
    }
    ctx->pc = 0x1BA928u;
    // 0x1ba928: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1ba928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951056)));
    // 0x1ba92c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA92Cu;
    {
        const bool branch_taken_0x1ba92c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA92Cu;
        // 0x1ba930: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba92c) {
            ctx->pc = 0x1BA988u;
            goto label_1ba988;
        }
    }
    ctx->pc = 0x1BA934u;
    // 0x1ba934: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ba934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ba938: 0x8c46c098  lw          $a2, -0x3F68($v0)
    ctx->pc = 0x1ba938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951064)));
    // 0x1ba93c: 0x2484afd0  addiu       $a0, $a0, -0x5030
    ctx->pc = 0x1ba93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946768));
    // 0x1ba940: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA940u;
    SET_GPR_U32(ctx, 31, 0x1BA948u);
    ctx->pc = 0x1BA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA940u;
    // 0x1ba944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA940u, 0x1BA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA948u;
label_1ba948:
    // 0x1ba948: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BA948u;
    {
        const bool branch_taken_0x1ba948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA948u;
        // 0x1ba94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba948) {
            ctx->pc = 0x1BAA48u;
            goto label_1baa48;
        }
    }
    ctx->pc = 0x1BA950u;
label_1ba950:
    // 0x1ba950: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ba954: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba958: 0x8c44d690  lw          $a0, -0x2970($v0)
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40D690u));
    // 0x1ba95c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba960: 0xac71c098  sw          $s1, -0x3F68($v1)
    ctx->pc = 0x1ba960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x24C098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C098u, _value); } while (0);
    // 0x1ba964: 0xc06bcd8  jal         func_1AF360
    ctx->pc = 0x1BA964u;
    SET_GPR_U32(ctx, 31, 0x1BA96Cu);
    ctx->pc = 0x1BA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA964u;
    // 0x1ba968: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF360u, 0x1BA964u, 0x1BA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA96Cu;
label_1ba96c:
    // 0x1ba96c: 0xc06ea20  jal         func_1BA880
    ctx->pc = 0x1BA96Cu;
    SET_GPR_U32(ctx, 31, 0x1BA974u);
    ctx->pc = 0x1BA970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA96Cu;
    // 0x1ba970: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA880u, 0x1BA96Cu, 0x1BA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA974u;
label_1ba974:
    // 0x1ba974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA974u;
    {
        const bool branch_taken_0x1ba974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA974u;
        // 0x1ba978: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba974) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA97Cu;
    // 0x1ba97c: 0x8e04c0ac  lw          $a0, -0x3F54($s0)
    ctx->pc = 0x1ba97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951084)));
    // 0x1ba980: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA980u;
    SET_GPR_U32(ctx, 31, 0x1BA988u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA980u, 0x1BA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA988u;
label_1ba988:
    // 0x1ba988: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BA988u;
    {
        const bool branch_taken_0x1ba988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA988u;
        // 0x1ba98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba988) {
            ctx->pc = 0x1BAA48u;
            goto label_1baa48;
        }
    }
    ctx->pc = 0x1BA990u;
label_1ba990:
    // 0x1ba990: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1BA990u;
    SET_GPR_U32(ctx, 31, 0x1BA998u);
    ctx->pc = 0x1BA994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA990u;
    // 0x1ba994: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1BA990u, 0x1BA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA998u;
label_1ba998:
    // 0x1ba998: 0x8e42c0c8  lw          $v0, -0x3F38($s2)
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951112)));
    // 0x1ba99c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA99Cu;
    {
        const bool branch_taken_0x1ba99c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA99Cu;
        // 0x1ba9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba99c) {
            ctx->pc = 0x1BAA48u;
            goto label_1baa48;
        }
    }
    ctx->pc = 0x1BA9A4u;
    // 0x1ba9a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA9A4u;
    {
        const bool branch_taken_0x1ba9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A4u;
        // 0x1ba9a8: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a4) {
            ctx->pc = 0x1BA9D4u;
            goto label_1ba9d4;
        }
    }
    ctx->pc = 0x1BA9ACu;
    // 0x1ba9ac: 0x0  nop
    ctx->pc = 0x1ba9acu;
    // NOP
label_1ba9b0:
    // 0x1ba9b0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1ba9b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba9b8:
    // 0x1ba9b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba9bc: 0x0  nop
    ctx->pc = 0x1ba9bcu;
    // NOP
    // 0x1ba9c0: 0x0  nop
    ctx->pc = 0x1ba9c0u;
    // NOP
    // 0x1ba9c4: 0x0  nop
    ctx->pc = 0x1ba9c4u;
    // NOP
    // 0x1ba9c8: 0x0  nop
    ctx->pc = 0x1ba9c8u;
    // NOP
    // 0x1ba9cc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA9CCu;
    {
        const bool branch_taken_0x1ba9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba9cc) {
            ctx->pc = 0x1BA9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba9b8;
        }
    }
    ctx->pc = 0x1BA9D4u;
label_1ba9d4:
    // 0x1ba9d4: 0x2630dac8  addiu       $s0, $s1, -0x2538
    ctx->pc = 0x1ba9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957768));
label_1ba9d8:
    // 0x1ba9d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ba9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9e0: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1ba9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x1ba9e4: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BA9E4u;
    SET_GPR_U32(ctx, 31, 0x1BA9ECu);
    ctx->pc = 0x1BA9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9E4u;
    // 0x1ba9e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BA9E4u, 0x1BA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9ECu;
label_1ba9ec:
    // 0x1ba9ec: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA9ECu;
    {
        const bool branch_taken_0x1ba9ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ba9ec) {
            ctx->pc = 0x1BA9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA9ECu;
            // 0x1ba9f0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAA3Cu;
            goto label_1baa3c;
        }
    }
    ctx->pc = 0x1BA9F4u;
    // 0x1ba9f4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba9f8: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C090u));
    // 0x1ba9fc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA9FCu;
    {
        const bool branch_taken_0x1ba9fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9FCu;
        // 0x1baa00: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9fc) {
            ctx->pc = 0x1BAA14u;
            goto label_1baa14;
        }
    }
    ctx->pc = 0x1BAA04u;
    // 0x1baa04: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1baa04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1baa08: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BAA08u;
    SET_GPR_U32(ctx, 31, 0x1BAA10u);
    ctx->pc = 0x1BAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA08u;
    // 0x1baa0c: 0x2484aff8  addiu       $a0, $a0, -0x5008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BAA08u, 0x1BAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA10u;
label_1baa10:
    // 0x1baa10: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1baa14:
    // 0x1baa14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1baa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1baa18:
    // 0x1baa18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1baa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1baa1c: 0x0  nop
    ctx->pc = 0x1baa1cu;
    // NOP
    // 0x1baa20: 0x0  nop
    ctx->pc = 0x1baa20u;
    // NOP
    // 0x1baa24: 0x0  nop
    ctx->pc = 0x1baa24u;
    // NOP
    // 0x1baa28: 0x0  nop
    ctx->pc = 0x1baa28u;
    // NOP
    // 0x1baa2c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BAA2Cu;
    {
        const bool branch_taken_0x1baa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1baa2c) {
            ctx->pc = 0x1BAA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BAA34u;
    // 0x1baa34: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BAA34u;
    {
        const bool branch_taken_0x1baa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA34u;
        // 0x1baa38: 0x2630dac8  addiu       $s0, $s1, -0x2538 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa34) {
            ctx->pc = 0x1BA9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba9d8;
        }
    }
    ctx->pc = 0x1BAA3Cu;
label_1baa3c:
    // 0x1baa3c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BAA3Cu;
    {
        const bool branch_taken_0x1baa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA3Cu;
        // 0x1baa40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa3c) {
            ctx->pc = 0x1BA9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba9b0;
        }
    }
    ctx->pc = 0x1BAA44u;
    // 0x1baa44: 0xae40c0c8  sw          $zero, -0x3F38($s2)
    ctx->pc = 0x1baa44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951112), GPR_U32(ctx, 0));
label_1baa48:
    // 0x1baa48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1baa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1baa4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1baa4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baa50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1baa50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baa54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baa54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA58u;
        // 0x1baa5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAA60u;
}
