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

// Function: Setup2__8BcThreadP5BcObjPFP8BcThread_viPUiUiPvi
// Address: 0x1a1880 - 0x1a19ac
void Setup2__8BcThreadP5BcObjPFP8BcThread_viPUiUiPvi_0x1a1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup2__8BcThreadP5BcObjPFP8BcThread_viPUiUiPvi_0x1a1880");
#endif

    switch (ctx->pc) {
        case 0x1a18e0u: goto label_1a18e0;
        case 0x1a18fcu: goto label_1a18fc;
        case 0x1a1940u: goto label_1a1940;
        case 0x1a1970u: goto label_1a1970;
        case 0x1a1980u: goto label_1a1980;
        default: break;
    }

    ctx->pc = 0x1a1880u;

    // 0x1a1880: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a1884: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a1884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1a1888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a188c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1a188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1a1890: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a1890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1894: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a1894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a1898: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1a1898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a189c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1a189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1a18a0: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1a18a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18a4: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1a18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1a18a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a18a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18ac: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a18acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1a18b0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1a18b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18b4: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1a18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x1a18b8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1a18b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18bc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1a18bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1a18c0: 0x1500000f  bnez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A18C0u;
    {
        const bool branch_taken_0x1a18c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C0u;
        // 0x1a18c4: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18c0) {
            ctx->pc = 0x1A1900u;
            goto label_1a1900;
        }
    }
    ctx->pc = 0x1A18C8u;
    // 0x1a18c8: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1a18c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a18cc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A18CCu;
    {
        const bool branch_taken_0x1a18cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18CCu;
        // 0x1a18d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18cc) {
            ctx->pc = 0x1A18D8u;
            goto label_1a18d8;
        }
    }
    ctx->pc = 0x1A18D4u;
    // 0x1a18d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a18d8:
    // 0x1a18d8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A18D8u;
    SET_GPR_U32(ctx, 31, 0x1A18E0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A18D8u, 0x1A18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18E0u;
label_1a18e0:
    // 0x1a18e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A18E0u;
    {
        const bool branch_taken_0x1a18e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18E0u;
        // 0x1a18e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18e0) {
            ctx->pc = 0x1A18FCu;
            goto label_1a18fc;
        }
    }
    ctx->pc = 0x1A18E8u;
    // 0x1a18e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a18ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a18ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18f0: 0x24a590f8  addiu       $a1, $a1, -0x6F08
    ctx->pc = 0x1a18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938872));
    // 0x1a18f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A18F4u;
    SET_GPR_U32(ctx, 31, 0x1A18FCu);
    ctx->pc = 0x1A18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18F4u;
    // 0x1a18f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A18F4u, 0x1A18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18FCu;
label_1a18fc:
    // 0x1a18fc: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1a18fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a1900:
    // 0x1a1900: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a1900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1904: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a1904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1a1908: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x1a1908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x1a190c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a1910: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a1910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a1914: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a1918: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x1a191c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1924: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1a1924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1a1928: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x1a1928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
    // 0x1a192c: 0xafb60014  sw          $s6, 0x14($sp)
    ctx->pc = 0x1a192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 22));
    // 0x1a1930: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a1930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a1934: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1a1934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1a1938: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x1A1938u;
    SET_GPR_U32(ctx, 31, 0x1A1940u);
    ctx->pc = 0x1A193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1938u;
    // 0x1a193c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x1A1938u, 0x1A1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1940u;
label_1a1940:
    // 0x1a1940: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1944: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1944u;
    {
        const bool branch_taken_0x1a1944 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1944u;
        // 0x1a1948: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1944) {
            ctx->pc = 0x1A1980u;
            goto label_1a1980;
        }
    }
    ctx->pc = 0x1A194Cu;
    // 0x1a194c: 0x12930009  beq         $s4, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A194Cu;
    {
        const bool branch_taken_0x1a194c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A194Cu;
        // 0x1a1950: 0xae170018  sw          $s7, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a194c) {
            ctx->pc = 0x1A1974u;
            goto label_1a1974;
        }
    }
    ctx->pc = 0x1A1954u;
    // 0x1a1954: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a1954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a195c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1960: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a1960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1a1964: 0xafb40038  sw          $s4, 0x38($sp)
    ctx->pc = 0x1a1964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 20));
    // 0x1a1968: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A1968u;
    SET_GPR_U32(ctx, 31, 0x1A1970u);
    ctx->pc = 0x1A196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1968u;
    // 0x1a196c: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A1968u, 0x1A1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1970u;
label_1a1970:
    // 0x1a1970: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a1970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a1974:
    // 0x1a1974: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1978: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1A1978u;
    SET_GPR_U32(ctx, 31, 0x1A1980u);
    ctx->pc = 0x1A197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1978u;
    // 0x1a197c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1A1978u, 0x1A1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1980u;
label_1a1980:
    // 0x1a1980: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a1980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1984: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1a1984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a1988: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a1988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a198c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1a198cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a1990: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1a1990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1994: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1a1994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a1998: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a1998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a199c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1a199cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a19a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a19a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a19a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A19A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19A4u;
        // 0x1a19a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A19ACu;
}
